#include<stdio.h>
int fact(int );
int main(){
    int n,c,rem,d,temp,sum=0;
    printf("Enter a number :");
    scanf("%d",&n);
    temp = n;
    while(n>0){
        d=n%10;
        c=fact(d);
        sum+=c;         //sum contains sum of factorial of digits.
        n=n/10;
    }
    if(sum==temp){
        printf("Entered number is a strong number");
    }
    else{
        printf("Entered number is not a strong number");
    }
    return 0;
}
int fact(int a){
    if(a==0||a==1){
        return 1;
    }
    if(a<0){
        printf("Enter a positive integer");
    }
    if(a>1){
        return a*fact(a-1);
    }
}