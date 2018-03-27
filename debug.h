//
// Created by Chu on 28/03/2018.
//

#ifndef C_CPP_UTILS_DEBUG_H
#define C_CPP_UTILS_DEBUG_H

#include <string.h>
#include <stdio.h>

#ifdef _WIN32
#define __FILENAME__ (strrchr(__FILE__, '\\') ? strrchr(__FILE__, '\\') + 1 : __FILE__)
#else
#define __FILENAME__ (strrchr(__FILE__, '/') ? strrchr(__FILE__, '/') + 1 : __FILE__)
#endif

#define __DEBUG__
#ifdef __DEBUG__
#define DEBUG(fmt, args...) do {fprintf(stderr, "%s:%d: "fmt"\n", __FILENAME__, __LINE__, ##args);} while (0)
#else
#define DEBUG(...) do {} while (0)
#endif

#endif //C_CPP_UTILS_DEBUG_H
