#include <fstream>
#include "ram.h"
#include <iostream>

void save () {
    std::ofstream file;
    file.open("data.txt");
    if (!file.is_open()) {
        std::cout << "File is not open" << std::endl;
    }
    for (int i = 0;i < 8;i++) {
        file << read(i) << " ";
    }
    std::cout << "All digits were saved" << std::endl;
    file.close();
}

void load () {
    std::ifstream file;
    int buffer[8];
    file.open("data.txt");
    if (!file.is_open()) {
        std::cout << "File is not open" << std::endl;
    }
    for (int i = 0;i < 8;i++) {
        file >> buffer[i];
    }
    write(buffer);
    std::cout << "All digits were loaded" << std::endl;
    file.close();
}