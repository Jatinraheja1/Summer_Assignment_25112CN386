// Write a program to Print multiplication table of a given number
#include<stdio.h>
int main(){
    int n,table;
    printf("enter the number whose table is required :");
    scanf("%d",&n);
    printf("required table is : \n");
    for(int i=1;i<=10;i++){
        table = n*i;
        printf("%d\n", table);
    }
    return 0;
}