#include<stdio.h>

int main(){
    int ch,ch2;
    printf("1)Play\n2)Settings\n3)About\n4)Exit\nEnter Your Choice :");
    scanf("%d",&ch);

    switch(ch){
        case 1:
        printf("Game is Started...");
        break;
        case 2:
        printf("Setting Page is Opened...");
          printf("\n1)Audio\n2)Video\n3)Mouse\n4)Keyboard\nEnter Your Choice :");
          scanf("%d",&ch2);
          switch(ch2){
            case 1:
            printf("Audio Setttings are opened..");
            break;
            case 2:
            printf("Video Setttings are opened..");
            break;
            case 3:
            printf("Mouse Setttings are opened..");
            break;
            case 4:
            printf("Keyboard Setttings are opened..");
            break;
            default:
            
            printf("Invalid Choice .....");
          }
        break;
        case 3:
        printf("About Page is Opened....");
        break;
        case 4:
        printf("Exiting The Game ....");
        break;
        default:
        printf("Invalid Choice...");
    }
}