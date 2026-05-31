#include<stdio.h>
int fib(int);
int main(){
    int n,i;
    printf("Enter the position of fibonacci term :");
    scanf("%d",&n);
    printf("%dth fibonacci term is : %d",n,fib(n));
    return 0;
}
int fib(int a){
    if(a <= 0){
        return 0;
    }
    else if(a == 1 || a == 2){
        return 1;
    }
    while(a>2){
    return fib(a-1) + fib(a-2);
    }
}