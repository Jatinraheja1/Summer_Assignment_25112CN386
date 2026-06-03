#include<stdio.h>
int fact(int );
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    printf("Factorial of %d is : %d",n,fact(n));
    return 0;
}
int fact(int a){
    if(a<0){
        printf("Enter a positive integer");
        return 0;
    }
    if(a==0||a==1){
        return 1;
    }
    return a*fact(a-1);
}