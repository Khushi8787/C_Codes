#include<stdio.h>
void sum(int, int);
void main(){
    int a,b;
    printf(" enter two no.=");
    scanf("%d ,%d",&a, &b);
    sum(a,b);

}void sum(int a, int b){
    printf("sum =%d\n",a+b);
}


