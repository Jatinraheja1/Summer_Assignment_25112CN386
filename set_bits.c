#include<stdio.h>
int main(){
    int n,count=0;
    printf("Enter a number :");
    scanf("%d",&n);
    if(n<0){
        printf("Enter a positive integer");
        return 0;
    }
    while(n>0){
        if(n%2 == 1){
            count++;
        }
        n=n/2;
    }
    printf("Number of set bits in a number is :%d",count);
    return 0;
}