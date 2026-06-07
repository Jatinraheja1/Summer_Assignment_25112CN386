#include<stdio.h>
int prime(int);
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    prime(n);
    return 0;
}
int prime(int n){
    int flag = 0;
    if(n<=1){
        printf("Enter a positive integer greater than 1");
        return 0;
    }
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("Entered number is not a prime number");
    }
    else{
        printf("Entered number is a prime number");
    }
    return 0;
}