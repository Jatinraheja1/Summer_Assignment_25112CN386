#include<stdio.h>
int main(){
    int n,table;
    printf("enter the number whose table is required :");
    scanf("%d",&n);
    printf("Required table is : \n");
    for(int i=1;i<=10;i++){
        table = n*i;
        printf("%d\n", table);
    }
    return 0;
}