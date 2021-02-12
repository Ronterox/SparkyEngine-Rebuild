#pragma once
#define DEBUG 1

#if DEBUG
#   define LOG(x); std::cout << x << std::endl
#else
#   define LOG(x);
#endif
