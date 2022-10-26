#include <iostream>
#include "cpu.h"
#include "disk.h"
#include "gpu.h"
#include "kbd.h"

int main() {
    while (true) {
        std::string command;
        std::cout << "Input command: ";
        std::cin >> command;
        if (command == "sum") {
            std::cout << "sum = " << comput() << std::endl;
        } else if (command == "save") {
            save();
        } else if (command == "load") {
            load();
        } else if (command == "display") {
            show();
        } else if (command == "input") {
            input();
        } else if (command == "exit") {
            return 0;
        } else {
            std::cout << "Input error! Try again" << std::endl;
        }
    }
}
