#include<stdio.h>
int main(){
    int r,c;
    printf("Enter rows and columns: ");
    scanf("%d%d",&r,&c);
    int arr[r][c];
    printf("Enter matrix:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Transpose Matrix:\n");
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}