#include<stdio.h>
int main(){
    int d= 1;
    int k= 1;
    while(d<= 7){
        k=1;
        while( k<= 8){
            printf("%d-",k);
            k++;
        }
        printf("\n" );
        d++;
    }
}