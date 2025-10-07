#include<stdio.h>

int main(){          
    int i,j;
     int a[4][4]={10,20,30,40,50,60,70,80,90,100,120,130, 140, 150, 160};
     for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("a[%d][%d]=[%d]\t",i,j,a[i][j]);
           

        }
        printf("\n");
     }

}
// using matrix formula n*m