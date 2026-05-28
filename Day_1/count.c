#include<stdio.h>
int main(){
    int num,count=0;
    printf("enter the number:");
    scanf("%d",&num);
    while(num>0){
        num = num/10;
        count ++;
    }
    printf("digits in entered number is : %d", count);
    return 0;
}