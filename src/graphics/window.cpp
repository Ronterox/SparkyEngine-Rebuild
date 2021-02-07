#include "window.h"
#include <iostream>

#define DEBUG 1

#if DEBUG
#   define LOG(x); std::cout << x << std::endl
#else
#   define LOG(x);
#endif

namespace Sparky::Graphics
{
    void windowsResize(GLFWwindow *window, int width, int height);

    Window::Window(const char *title, int width, int height)
    {
        m_Title = title;
        m_Width = width;
        m_Height = height;
        init();
    }

    Window::~Window()
    {
        glfwTerminate();LOG("Windows name: " << m_Title << " closed!");
    }

    bool Window::init()
    {
        if (!glfwInit())
        { LOG("Failed glfwInit!");
            return false;
        }

        m_Window = glfwCreateWindow(m_Width, m_Height, m_Title, NULL, NULL);

        if (!m_Window)
        {
            glfwTerminate();LOG("Failed to create GLFW Window name: " << m_Title << "!");
            return false;
        }

        glfwMakeContextCurrent(m_Window);LOG("Window name: " << m_Title << " created Successfully");
        glfwSetWindowSizeCallback(m_Window, windowsResize);

        if (glewInit() != GLEW_OK)
        { LOG("Could not initialize glew!");
            return false;
        }

        LOG("OpenGl: " << glGetString(GL_VERSION));
        return true;
    }

    void Window::update()
    {
        glfwPollEvents();
        glfwSwapBuffers(m_Window);
    }

    bool Window::closed() const
    {
        return glfwWindowShouldClose(m_Window);
    }

    void Window::clear() const
    {
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    }

    void windowsResize(GLFWwindow *window, int width, int height)
    {
        glViewport(0, 0, width, height);
    }
}
