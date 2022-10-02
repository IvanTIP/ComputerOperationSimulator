#pragma once
#include "rum.h"
void show () {
    int buffer[8];
    read(buffer);
    for (int i = 0;i < 8;i++) {
        std::cout << buffer[i] << " ";
    }
    std::cout << std::endl;
}