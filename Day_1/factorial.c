#include<stdio.h>
int main(){
    int n,fact=1;
    printf("enter the number whose factorial is required :");
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        fact = fact*i;
    }
    printf("Required factorial is : %d",fact);
    return 0;
}