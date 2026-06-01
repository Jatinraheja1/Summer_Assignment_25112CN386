#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        if(n%i==0){     //this means 'i' is a divisor of 'n'
            sum=sum+i;
        }
    }
    if(sum ==n){
        printf("Entered number is a perfect number");
    }
    else{
        printf("Entered number is not a perfect number");
    }
    return 0;
}