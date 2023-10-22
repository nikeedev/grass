#include <stdio.h>

#define GR_LOG(x) printf("\x1B[32mGRASS:\033[0m %s\x1b[34m\033[0m\n", x)
#define GR_ERROR(x) printf("\x1B[31mGRASS ERROR:\033[0m %s\x1b[31m\033[0m\n", x)
#define GR_WARNING(x) printf("\x1B[32mGRASS WARNING:\033[0m %s\x1b[34m\033[0m\n", x)
