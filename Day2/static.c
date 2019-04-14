#include<stdio.h>

void func(void); /*function declaration */

static int counter = 5; /** global variable */

int main() {
    while(counter--) {
        func();
    }
    return 0;
}

void func(void) {
    static int i = 5; /* local static variable */
    i++;

    printf(" global counter value %d and local static variable value %d\n", counter, i);

}
