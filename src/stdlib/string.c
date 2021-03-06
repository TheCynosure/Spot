#include "string.h"
#include <efi.h>

void *spot_memcpy(void *dest, void *src, UINTN size) {
    for(UINTN i = 0; i < size; i++)
        *(char*)(dest + i) = *(char*)(src + i);
    return dest;
}

void *spot_memset(void *src, int constant, UINTN size) {
    for(UINTN i = 0; i < size; i++)
        *(char*)(src + i) = (char) constant;
    return src;
}
