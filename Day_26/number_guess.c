#include<stdio.h>
int main(){
    int secret=25;
    int guess;
    printf("Guess the number (1-50)\n");
    while(1){
        printf("Enter guess: ");
        scanf("%d",&guess);
        if(guess==secret){
            printf("Correct Guess!\n");
            break;
        }
        else if(guess<secret){
            printf("Too Low\n");
        }
        else{
            printf("Too High\n");
        }
    }
    return 0;
}