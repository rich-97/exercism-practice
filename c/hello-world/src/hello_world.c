#include <stdio.h>
#include <stddef.h>
#include <string.h>

#include "hello_world.h"

void hello(char *buffer, const char *name) {
    if (name == NULL) {
        strcat(buffer, "Hello, World!");
    } else {
        strcpy(buffer, "");
        strcat(buffer, "Hello, ");
        strcat(buffer, name);
        strcat(buffer, "!");
    }
}

