#include<stdio.h>
#define LENGTH 5
#define WIDTH 10
#define NEWLINE '\n'

int main() {
    int area;

    area = LENGTH * WIDTH;
    printf("area is %d", area);
    printf("%c", NEWLINE);

    return 0;
}
