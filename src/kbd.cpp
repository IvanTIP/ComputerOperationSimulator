#include "ram.h"
#include <iostream>
void input () {
    int buffer[8];
    for (int i = 0;i < 8;i++) {
        std::cout << "Input digit: ";
        std::cin >> buffer[i];
    }
    write(buffer);
}