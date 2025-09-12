#include<stdio.h>
int main(){
    int i= 1;
    int j =1;
   int num =1 ;
    while(i<= 50){
        j=1;
        while(j<=i){
            printf(" %d", num);
            j++;
            num++;
        }
        printf("\n");
        i++;
    }
}