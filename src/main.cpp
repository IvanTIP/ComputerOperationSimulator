#include <iostream>
#include "kbd.h"
#include "cpu.h"
#include "gpu.h"
#include "disk.h"

int main() {
    while (true) {
        std::string command;
        std::cout << "Input command: ";
        std::cin >> command;
        if (command == "sum") {
            comput();
        } else if (command == "save") {
            save();
        } else if (command == "load") {
            load();
        } else if (command == "input") {
            input();
        } else if (command == "display") {
            show();
        } else if (command == "exit") {
            return 0;
        } else {
            std::cout << "Input error! Try again" << std::endl;
        }
    }
}
