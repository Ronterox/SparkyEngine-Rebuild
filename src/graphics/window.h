#pragma once

#include <GL/glew.h>
#include <GLFW/glfw3.h>

namespace Sparky::Graphics
{

#define MAX_KEYS 1024
#define MAX_BUTTONS 32

    class Window
    {
    private:
        const char *m_Title;
        int m_Width, m_Height;
        GLFWwindow *m_Window;

        bool m_Keys[MAX_KEYS];
        bool m_MouseButtons[MAX_BUTTONS];
        double m_MouseX, m_MouseY;

    public:
        Window(const char *title, int width, int height);

        ~Window();

        void update();

        bool closed() const;

        void clear() const;

    private:
        bool init();

        friend void key_callback(GLFWwindow *window, int key, int scancode, int action, int mods);

        friend void mouse_button_callback(GLFWwindow *window, int button, int action, int mods);

        friend void cursor_position_callback(GLFWwindow* window, double xpos, double ypos);

    public:

        inline int getWidth() const { return m_Width; }

        inline int getHeight() const { return m_Height; }

        bool isKeyPressed(unsigned int keycode);

        bool isButtonPressed(unsigned int button);

        void getMousePosition(double &x, double &y);
    };
}