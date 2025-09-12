#include<stdio.h>
int main(){
    int q=1;
    int w=1;
    int e=1;
  
    for(q=1; q<= 3; q++){
        for(w=1; w<= 3; w++){
            for(e= 1; e<=3; e++){
                if( q== 3 && w== 3 && e==3){
                    goto set;
                }
                printf(" %d %d %d \n", q,w,e);
            }
        }
    }
    set:
    printf(" loop set ");
}