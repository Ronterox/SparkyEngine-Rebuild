#include <GL/glew.h>
#include <vector>
#include "../Utils/file.h"

namespace Sparky::Graphics
{
    class Shader
    {
    private:
        GLuint m_ShaderID;
        const char *m_VertexPath, *m_FragmentPath;
    public:
        Shader(const char *vertexPath, const char *fragmentPath);

        ~Shader();

        void enable() const;

        void disable() const;

    private:
        GLuint load();
    };
}
