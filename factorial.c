#include<stdio.h>
int factorial(int n){
    if(n==0){
        return 1;
    }else return n*factorial(n-1);
}
int main(){
    int num;
    printf(" enter any no.");
    scanf("%d\n",&num);
    printf(" the factorial of %d is %d\n", num, factorial(num));
}