#include<stdio.h>
int main(){
    int n,d,product=1;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n<0){
        printf("Enter a positive number");
        return 0;
    }
    else if(n==0){
        printf("product of digits is : 0");
        return 0;
    }
    while(n>0){
        d=n%10;
        product=product*d;
        n=n/10;
    }
    printf("product of digits of entered number is : %d",product);
    return 0;
}