#include<stdio.h>
extern int count;

void write_extern(void){
    printf("value of count is : %d", count);
}
