#include<stdio.h>
int main(){
    int n;
    printf("Enter size of array :");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements :");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            j++;
        }
    }
    printf("Array after moving zeroes:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}