#include "src/Graphics/window.h"
#include "src/Debug/utility_methods.h"

int main()
{
    using namespace Sparky::Graphics;

    Window window("FIRST WINDOW", 960, 640);

    glClearColor(.2f, .3f, .8f, 1.0f);

    while (!window.closed())
    {
        window.clear();
        double x, y;
        window.getMousePosition(x, y);
        //LOG("[" << x << ", " << y << "]");

        if(window.isKeyPressed(GLFW_KEY_A))
        {
            //LOG("Is pressed!!");
        }
        if(window.isButtonPressed(GLFW_MOUSE_BUTTON_LEFT))
        {
            //LOG("Mouse pressed!!!");
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
    return 0;
}
