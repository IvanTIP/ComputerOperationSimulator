#pragma once
#include "rum.h"
int sum = 0;
void comput () {
    int buffer[8];
    read(buffer);
    for (int i = 0;i < 8;i++) {
        sum += buffer[i];
    }
    std::cout << "sum = " << sum << std::endl;
}