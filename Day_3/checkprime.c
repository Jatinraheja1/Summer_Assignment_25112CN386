#include<stdio.h>
int main(){
    int n, i, flag = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n <= 1){
        printf("Entered number is not a prime number");
        return 0;
    }
    for(i = 2; i <= n/2; i++){
        if(n%i == 0){
            flag = 0;
            break;
        }
    }
    if(flag == 1)
        printf("Entered number is a prime number");
    else
        printf("Entered number is not a prime number");

    return 0;
}