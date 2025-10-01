#include<stdio.h>
it add(int, int);
int main(){
    int a=6, b=7;
    printf("actual value= %d + %d= %d\n"a,b,a+b);
    add(a,b);
    printf(" after function call value= %d +%d= %d\n",a, b,a+b);
}
int add(int x, int y){
    x++;
    y++;
    printf("formal value= %d+ %d= %d\n",x,y,x+y);
}
