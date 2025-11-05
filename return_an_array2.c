#include<stdio.h>
void getarray(int a[]){
    printf(" numbers of array:");

    for(int i= 1; i<3; i++){
        scanf("%d",a[i]);
    }
}
int main(){
     int a[3]= {12,23,34};

     getarray(a);
}