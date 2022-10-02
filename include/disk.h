#pragma once
#include <fstream>
#include "rum.h"
int save () {
    int buffer[8];
    std::ofstream file;
    file.open ("D:\\SkillboxProjects\\project_struct\\ex2\\data.txt");
    if (!file.is_open()) {
        std::cout << "The file is not open" << std::endl;
        return 1;
    }

    read(buffer);
    for (int i = 0;i < 8;i++) {
        file << buffer[i] << " ";
    }
    file.close();
    std::cout << "All the digits have been saved" << std::endl;
    return 0;
}

int load () {
    int buffer[8];
    std::ifstream file;
    file.open ("D:\\SkillboxProjects\\project_struct\\ex2\\data.txt");
    if (!file.is_open()) {
        std::cout << "The file is not open" << std::endl;
        return 1;
    }

    for (int i = 0;i < 8;i++) {
        file >> buffer[i];
        if (file.eof()) {
            std::cout << "The uploaded file is empty" << std::endl;
            return 0;
        }
    }
    file.close();
    write(buffer);
    std::cout << "All the digits were loaded" << std::endl;
    return 0;
}
