#include "ram.h"

int buffer[8];

void write (int const (&digits)[8]) {
    for (int i = 0;i < 8;i++) {
        buffer[i] = digits[i];
    }
}

int read (int i) {
    return buffer[i];
}

