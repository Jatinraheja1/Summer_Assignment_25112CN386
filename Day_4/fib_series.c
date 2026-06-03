#include<stdio.h>
int fib(int );
int main(){
    int n;
    printf("Enter a number upto which fibonacci series is to be printed :");
    scanf("%d",&n);
    printf("Fibonacci series upto %dth term is :",n);
    for(int i=0;i<=n;i++){
        printf("%d\t",fib(i));
    }
}
int fib(int a){
    if(a<=0){
        printf("Enter positive integer");
        return 0;
    }
    if(a==1||a==2){
        return 1;
    }
    else{
        return fib(a-1)+fib(a-2);
    }
}