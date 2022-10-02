#pragma once
int digits [8];
void write (int const (&buffer)[8]) {
    for (int i = 0;i < 8;i++) {
        digits[i] = buffer[i];
    }
}

void read (int (&buffer)[8]) {
    for (int i = 0;i < 8;i++) {
        buffer[i] = digits[i];
    }
}


