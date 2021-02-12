#include "window.h"
#include <iostream>
#include "src/debug/logSystem.h"

namespace Sparky::Graphics
{
#pragma region WINDOW_CALLBACKS

    void window_resize_callback(GLFWwindow *window, int width, int height)
    {
        glViewport(0, 0, width, height);
    }

    void key_callback(GLFWwindow *window, int key, int scancode, int action, int mods)
    {
        auto *win = (Window *) glfwGetWindowUserPointer(window);
        win->m_Keys[key] = action != GLFW_RELEASE;
    }

    void mouse_button_callback(GLFWwindow *window, int button, int action, int mods)
    {
        auto *win = (Window *) glfwGetWindowUserPointer(window);
        win->m_MouseButtons[button] = action != GLFW_RELEASE;
    }

    void cursor_position_callback(GLFWwindow *window, double xpos, double ypos)
    {
        auto *win = (Window *) glfwGetWindowUserPointer(window);
        win->m_MouseX = xpos;
        win->m_MouseY = ypos;
    }

#pragma endregion

#pragma region WINDOW_INIT

    Window::Window(const char *title, int width, int height)
    {
        m_Title = title;
        m_Width = width;
        m_Height = height;
        init();
    }

    Window::~Window()
    {
        LOG("Windows name: " << m_Title << " closed!");
        glfwTerminate();
    }

    bool Window::init()
    {
        if (!glfwInit())
        { LOG("Failed glfw Init!");
            return false;
        }

        m_Window = glfwCreateWindow(m_Width, m_Height, m_Title, NULL, NULL);

        if (!m_Window)
        { LOG("Failed to create GLFW Window name: " << m_Title << "!");
            glfwTerminate();
            return false;
        }

        LOG("Window name: " << m_Title << " created Successfully");
        glfwMakeContextCurrent(m_Window);
        glfwSetWindowUserPointer(m_Window, this);

        //Callbacks
        glfwSetWindowSizeCallback(m_Window, window_resize_callback);
        glfwSetKeyCallback(m_Window, key_callback);
        glfwSetMouseButtonCallback(m_Window, mouse_button_callback);
        glfwSetCursorPosCallback(m_Window, cursor_position_callback);

        if (glewInit() != GLEW_OK)
        { LOG("Could not initialize glew!");
            return false;
        }

        LOG("OpenGl: " << glGetString(GL_VERSION));
        return true;
    }

#pragma endregion

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

    bool Window::isKeyPressed(unsigned int keycode)
    {
        return keycode <= MAX_KEYS && m_Keys[keycode];
    }

    bool Window::isButtonPressed(unsigned int button)
    {
        return button <= MAX_BUTTONS && m_MouseButtons[button];
    }

    void Window::getMousePosition(double &x, double &y)
    {
        x = m_MouseX;
        y = m_MouseY;
    }
}
