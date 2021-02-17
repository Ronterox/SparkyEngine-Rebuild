#include "src/Graphics/window.h"
#include "src/Maths/maths.h"
#include "src/Debug/utility_methods.h"
#include "src/Utils/file.h"

int main()
{
    using namespace Sparky::Graphics;
    using namespace Sparky::Maths;
    using namespace Sparky::Utils;

    LOG(readFile("/home/rontero/Documents/CLionProjects/Sparky/main.cpp"));

    Window window("FIRST WINDOW", 960, 640);

    glClearColor(.2f, .3f, .8f, 1.0f);

    GLuint vao;
    glGenVertexArrays(1, &vao);
    glBindVertexArray(vao);

    Matrix4 position = Matrix4::translation(Vector3(2.0f,3.0f,4.0f));
    position *= Matrix4::identity();

    LOG(&position.columns[3].x);
    LOG(&position.elements[12]);

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
