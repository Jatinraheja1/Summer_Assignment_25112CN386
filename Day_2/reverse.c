#include<stdio.h>
#include<math.h>
int main(){
    int num,n,rev=0,d=0,dig=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num=0){
        printf("enter a positive integer");
    }
    while(num>0){
        d=num%10;
        dig++;
    }
    // number of digits in entered number
    while(num>0){
        d=num%10;
        rev=rev+d*(pow(10,dig-1));
        printf("reverse number is: %d", rev);
    }
    
    return 0;
}