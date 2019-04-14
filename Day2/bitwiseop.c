#include<stdio.h>

int main() {
    int a = 60; /* 0011 1100  */
    int b = 13; /* 0000 1101 */

    printf(" a & b => %d\n", a&b);

    printf(" a | b => %d\n", a|b);

    printf(" a ^ b => %d\n", a^b);

    printf(" ~b => %d\n", ~b);

    printf(" a << 2 => %d\n", a>>7);

    printf(" b >> 3 => %d\n", b>>7);
}