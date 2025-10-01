#include<stdio.h>
int sum(int, int);
int sub(int, int);
int mult(int, int);
int div(int, int);

int main(){
    char ch;
    int a,b;

    printf(" enter opertation=");
    scanf("%c",&ch);
    printf("enter the first no.= ");
    scanf("%d",&a);
    printf(" enter the second no.=");
    scanf("%d",&b);

    switch(ch){
        case '+':
        printf("sum = %d\n",sum(a,b));
        break;
        
        case '-':
        printf(" sub= %d\n",sub(a,b));
        break;
        case '*':
        printf("mult = %d\n",mult(a,b));
         break;
        case '/':
        printf(" div= %d\n", div(a,b));
         break;

    }
} 
int sum(int a, int b){
    printf(" sum = %d\n",a+b) ;
}
int sub(int a,int b){
   printf (" sub = %d\n",a-b);
}
int mult(int a, int b){
    printf(" mult = %d\n",a*b);
}
int div(int a,int b ){
    printf(" div= %d\n",a/b);
}