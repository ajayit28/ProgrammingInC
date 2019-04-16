#include<stdio.h>
// int max(int, int);

int max(num1,num2) {
    int result;
    if(num1 > num2) {
        result = num1;
    } else {
        result = num2;
    }
    return result;
}

int main() {
    int maxValue = max(10, 20);
    printf("Max number is : %d\n", maxValue);

}


