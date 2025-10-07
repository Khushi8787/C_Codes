#include<stdio.h>
int main(){
    int t;
    int a[4]={3,4,5,6};
     a[3]=50;
    for(t=0; t<= 3; t++){
        printf("%d\n",a[t]);
     }


     printf("%d\n",a[1]);
}