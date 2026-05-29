#include<stdio.h>
int main(){
    int num,org,rev=0,d;
    printf("Enter a number :");
    scanf("%d",&num);
    if(num<0){
        printf("Enter a positive number");
        return 0;
    }
    org=num;
    while(num>0){
        d=num%10;
        rev=rev*10+d;
        num=num/10;
    }
    if(org==rev){
        printf("Entered number is a palindrome");
    }
    else{
        printf("Entered number is not a palindrome");
    }
    return 0;
}