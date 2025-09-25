#include<stdio.h>
float sub(int, float);
int main(){
    float result;
    result= sub(40, 6.5);

    printf(" subtraction is =%f\n", result);
}
float sub(int a, float b){
return a-b;
}