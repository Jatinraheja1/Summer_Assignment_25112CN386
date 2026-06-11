#include<stdio.h>
int main(){
    int n,temp;
    printf("Enter size of array :");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements :");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    temp=arr[n-1];
    for(int i=n-1;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}