#pragma once
#include "rum.h"
void input () {
    int buffer[8];
    for (int i = 0;i < 8;i++) {
        std::cout << "Input digits: ";
        std::cin >> buffer[i];
    }
    write(buffer);
    std::cout << "The input was successful" << std::endl;
}