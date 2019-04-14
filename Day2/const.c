#include <stdio.h>

int main() {
    const int WIDTH = 10;
    const int LENGTH = 10;
    const char NEWLINE = '\n';
    int area;

    area = WIDTH * LENGTH;
    printf("Value of Area is %d", area);
    printf("%c", NEWLINE);
    return 0;
}