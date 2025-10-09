#include<stdio.h>
int main() {  //main function
    int num = 42;         
    int *ptr = &num;      
    printf("Value of num using pointer: %d\n",*ptr);
    *ptr = 28;
    printf("New value of num after dereferencing: %d\n", num);
    return 0;
}