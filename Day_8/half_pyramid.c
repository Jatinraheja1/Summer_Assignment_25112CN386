#include<stdio.h>
int main(){
    int row,column;
    printf("Enter the number of rows and columns :");
    scanf("%d %d",&row,&column);
    for(int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}