#include<stdio.h>
int main(){
    int n,flag=1;
    printf("Enter order of matrix: ");
    scanf("%d",&n);
    int arr[n][n];
    printf("Enter matrix:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j] != arr[j][i]){
                flag=0;
                break;
            }
        }
    }
    if(flag){
        printf("Symmetric Matrix");
    }
    else{
        printf("Not a Symmetric Matrix");
    }
    return 0;
}