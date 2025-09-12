#include<stdio.h>
int main(){
    int j= 1;
    set:
    printf(" %d\n", j*12);
    j++;
    if(j<=20){
        goto set ;
    }
}