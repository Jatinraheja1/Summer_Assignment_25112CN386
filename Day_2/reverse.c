#include<stdio.h>
int main(){
    int num, rev = 0, d;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num <= 0){
        printf("Enter a positive integer");
        return 0;
    }
    while(num > 0){
       d = num % 10;
        rev = rev * 10 + d;
        num = num / 10;
    }
    printf("Reverse number is: %d", rev);
    return 0;
}