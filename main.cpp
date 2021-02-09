#include "src/graphics/window.h"
#include "src/debug/logSystem.h"
#include <iostream>

inline void pause()
{
    std::cout << "Press enter to continue..." << std::endl;
    std::cin.get();
}

int main()
{
    using namespace Sparky::Graphics;

    Window window("FIRST WINDOW", 960, 640);

    glClearColor(.2f, .3f, .8f, 1.0f);

    GLuint vao;
    glGenVertexArrays(1, &vao);
    glBindVertexArray(vao);

    while (!window.closed())
    {
        window.clear();
        double x, y;
        window.getMousePosition(x, y);
        LOG("[" << x << ", " << y << "]");


        if(window.isKeyPressed(GLFW_KEY_A))
        {
            LOG("Is pressed!!");
        }
        if(window.isButtonPressed(GLFW_MOUSE_BUTTON_LEFT))
        {
            LOG("Mouse pressed!!!");
        }

        glBegin(GL_QUADS);
        glVertex2d(-0.5f, -0.5f);
        glVertex2d(-0.5f, 0.5f);
        glVertex2d(0.5f, 0.5f);
        glVertex2d(0.5f, -0.5f);
        glEnd();

        glDrawArrays(GL_ARRAY_BUFFER, 0, 6);
        window.update();
    }

    //pause();
    return 0;
}
