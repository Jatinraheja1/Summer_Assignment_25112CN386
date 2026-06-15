#include<stdio.h>
int main(){
    int score=0;
    char answer;
    printf("===== QUIZ =====\n");
    printf("Choose (a) for 1st option,(b) for 2nd option,(c) for 3rd option");
    printf("\nQ1. Capital of India?\n");
    printf("a) Delhi\nb) Mumbai\nc) Kolkata\n");
    scanf(" %c",&answer);
    if(answer=='a'){
        score++;
    }
    printf("\nQ2. 2 + 2 = ?\n");
    printf("a) 3\nb) 4\nc) 5\n");
    scanf(" %c",&answer);
    if(answer=='b'){
        score++;
    }
    printf("\nQ3. C is a ______ ?\n");
    printf("a) Language\nb) Browser\nc) Operating System\n");
    scanf(" %c",&answer);
    if(answer=='a'){
        score++;
    }
    printf("\nYour Score = %d/3\n",score);
    return 0;
}