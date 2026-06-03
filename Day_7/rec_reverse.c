#include<stdio.h>
int reverse(int);
int power(int);
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    printf("Reverse of entered number is %d", reverse(n));
    return 0;
}
int power(int n){
    if(n == 0){
        return 1;
    }
    return 10 * power(n-1);
}
int reverse(int a){
    int rev;
    if(a < 10){
        return a;
    }
    rev = a % 10;
    int temp = a/10;
    int count = 0;
    while(temp > 0){
        count++;
        temp = temp/10;
    }
    rev = rev * power(count) + reverse(a/10);
    return rev;
}