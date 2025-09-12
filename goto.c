#include<stdio.h>
int main(){
    int l= 1;
    int n= 1;
    
    for(l=1; l<=4; l++ ){
        for(n=1; n<= 4; n++){
            if( l==2 && n==2){
                goto end;
            }
         printf("%d %d\n",l, n);
}
    }
    end:
    printf("end of the loop");
}


