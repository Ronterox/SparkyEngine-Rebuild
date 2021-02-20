#pragma once

#include <string>

namespace Sparky::Utils
{
    std::string readFile(const char *filePath)
    {
        FILE *file = fopen(filePath, "rt");

        if (!file) return std::string("File on the specified path wasn't available! Path: ") + filePath;

        fseek(file, 0, SEEK_END);
        unsigned long length = ftell(file);

        char *data = new char[length + 1];

        fseek(file, 0, SEEK_SET);
        fread(data, 1, length, file);

        fclose(file);

        std::string result(data);
        delete[] data;

        return result;
    }
}