#include "shader.h"

namespace Sparky::Graphics
{
    Shader::Shader(const char *vertexPath, const char *fragmentPath)
            : m_VertexPath(vertexPath), m_FragmentPath(fragmentPath)
    {
        m_ShaderID = load();
    }

    Shader::~Shader()
    {
        glDeleteProgram(m_ShaderID);
    }

    void Shader::enable() const
    {
        glUseProgram(m_ShaderID);
    }

    void Shader::disable() const
    {
        glUseProgram(0);
    }

    GLuint Shader::load()
    {
        using Utils::readFile;

        GLuint program = glCreateProgram();
        GLuint vertex = glCreateShader(GL_VERTEX_SHADER)
        GLuint fragment = glCreateShader(GL_FRAGMENT_SHADER);

        const char *vertexSource = readFile(m_VertexPath).c_str();
        const char *fragmentSource = readFile(m_FragmentPath).c_str();

        glShaderSource(vertex, 1, &vertexSource, nullptr);
        glCompileShader(vertex);

        GLint result;

        glGetShaderiv(vertex, GL_COMPILE_STATUS, &result);
        if (result == GL_FALSE)
        {
            GLint length;
            glGetShaderiv(vertex, GL_INFO_LOG_LENGTH, &length);
            LOG("Failed to compile vertex shader! " << std::vector<char>(length)[0]);
            glDeleteShader(vertex);
            return 0;
        }

        glShaderSource(fragment, 1, &fragmentSource, nullptr);
        glCompileShader(fragment);

        glGetShaderiv(fragment, GL_COMPILE_STATUS, &result);
        if (result == GL_FALSE)
        {
            GLint length;
            glGetShaderiv(fragment, GL_INFO_LOG_LENGTH, &length);
            LOG("Failed to compile fragment shader! " << std::vector<char>(length)[0]);
            glDeleteShader(fragment);
            return 0;
        }

        glAttachShader(program, vertex);
        glAttachShader(program, fragment);

        glLinkProgram(program);
        glValidateProgram(program);

        glDeleteShader(vertex);
        glDeleteShader(fragment);

        return program;
    }
}