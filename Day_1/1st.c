#include<stdio.h>
int main(){
    int n,sum=0;
    printf("enter the number upto which sum is required:");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        sum +=i;
    }
    printf("sum upto required number is: %d", sum);
    return 0;
}