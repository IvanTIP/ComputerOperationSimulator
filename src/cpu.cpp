#include "cpu.h"
#include "ram.h"
int comput () {
    int sum = 0;
    for (int i = 0;i<8;i++) {
        sum += read(i);
    }
    return sum;
}
