#include<stdio.h>
int main(){
    int n,key;
    printf("Enter size: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter sorted array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter key: ");
    scanf("%d",&key);
    int low=0;
    int high=n-1;
    int found=0;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==key){
            printf("Found at position %d",mid+1);
            found=1;
            break;
        }
        else if(key>arr[mid]){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    if(found==0){
        printf("Element not found");
    }
    return 0;
}