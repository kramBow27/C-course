#include <stdio.h>

int main() {
    int x = 5;
    int y = 2;

    int sum = x + y;
    int sub = x - y;
    int times = x * y;
    float div = x / (float) y;
    printf("%-15.8f", div);
    return 0;
}