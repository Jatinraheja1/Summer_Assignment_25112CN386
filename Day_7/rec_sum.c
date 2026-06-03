#include<stdio.h>
int sum(int);
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n<0){
        printf("Enter a positive integer");
        return 0;
    }
    printf("Sum of digits of entered number = %d", sum(n));
    return 0;
}
int sum(int n){
    if(n == 0){
        return 0;
    }
    return (n % 10) + sum(n / 10);
}