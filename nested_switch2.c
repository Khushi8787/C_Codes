#include<stdio.h>
int main(){
    int ch1, ch2;
    printf(" 1) start \n 2) setting \n 3) about the game \n 4) end\n enter choice:");
    scanf("%d", &ch1);

    switch(ch1){
        case 1:
        printf(" start");
        break;

        case 2:
        printf (" setting");
        break;

        case 3:
        printf(" about the game");
        printf(" 1) how to play\n 2) how to resume\n 3) about bouns\n enter choice:");
        scanf("%d", &ch2);

        switch(ch2){

            case 1:
            printf(" how to play");
            break;

            case 2 :
            printf(" how to resume");
            break;

            case 3 :
            printf(" about bouns");
            break;
            default:
            printf(" invalid");

        }
        break;

        case 4:
        printf(" end");
        break;
        default:
        printf(" invalid");

    }


}