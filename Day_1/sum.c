#include<stdio.h>
int main(){
    int n, sum=0;
    printf("enter the number upto which sum is required :");
    scanf("%d", &n);
    for(int i=0;i<=n;i++){
        sum += i;
    }
    printf("required sum is : %d", sum);
    return 0;
}