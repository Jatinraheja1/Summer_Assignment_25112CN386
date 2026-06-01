#include<stdio.h>
int main(){
    int n,count=0,i,j;
    printf("Enter a number :");
    scanf("%d",&n);
    if(n<0){
        printf("Enter a positive integer");
        return 0;
    }
    for(i=1;i<n;i++){
        if(n%i==0){
            j=i;
        }
    }
    printf("Largest factor of %d is :%d",n,j);
    return 0;
}