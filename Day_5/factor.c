#include<stdio.h>
int main(){
    int n,d;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n<0){
        printf("Enter a positive integer");
        return 0;
    }
    printf("factors of %d are : ",n);
    for(int i=1;i<=n;i++){
        if(n%i==0){
            printf("%d\t",i);
        }
    }
    return 0;
}