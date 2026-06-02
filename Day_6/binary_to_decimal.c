#include<stdio.h>
int main(){
    int n,digit=0,power=1,decimal=0;
    printf("Enter a binary number :");
    scanf("%d",&n);

    while(n>0){
        digit=n%10;
        if(digit!=0 && digit!=1){       // checks if any digit is other than 0 or 1
        printf("Enter binary number(i.e. 0 or 1 only)");
        return 0;
        }
        decimal=decimal+digit*power;
        power=power*2;
        n=n/10;
    }
    printf("Decimal equivalent of entered number is : %d",decimal);
    return 0;
}