#include<stdio.h>
int main(){
/*int b=10;
int *p;         p goes to it's location
printf("%d",b);
p=&b; 
int **a;
a =&p;
printf("%d",a);*/
int b=10;
int *p;
printf("%d\n",b);
p =&b;
int **a;
a= &p;
printf("%d",a);
    

}