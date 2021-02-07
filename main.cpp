#include "src/graphics/window.h"
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
#if 0
        glBegin(GL_QUADS);
        glVertex2d(-0.5f, -0.5f);
        glVertex2d(-0.5f, 0.5f);
        glVertex2d(0.5f, 0.5f);
        glVertex2d(0.5f, -0.5f);
        glEnd();
#endif

        glDrawArrays(GL_ARRAY_BUFFER, 0, 6);
        window.update();
    }

    //pause();
    return 0;
}
