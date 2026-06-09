#include<stdio.h>
int fib(int);
int main(){
    int n;
    printf("Enter position: ");
    scanf("%d",&n);
    printf("Fibonacci term = %d",fib(n));
    return 0;
}
int fib(int n){
    if(n<=0||n==1){
        return 0;
    }
    if(n==2)
        return 1;
    int a=0,b=1,c;
    for(int i=3;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    return b;
}