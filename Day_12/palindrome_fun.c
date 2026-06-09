#include<stdio.h>
int palindrome(int );
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(palindrome(n)){
        printf("Palindrome Number");
    }
    else{
        printf("Not a Palindrome Number");
    }
    return 0;
}
int palindrome(int n){
    int original=n;
    int reverse=0;
    while(n>0){
        reverse=reverse*10+n%10;
        n=n/10;
    }
    return original==reverse;
}