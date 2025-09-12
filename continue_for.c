#include<stdio.h>
int main(){
    int r;
    for(r= 1; r<= 8; r++){
       
        if( r== 5){
            continue;
        } 
       printf("%d\n",r);
    }
}