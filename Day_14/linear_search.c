#include<stdio.h>
int main(){
    int n,key,found=0,arr[n];
    printf("Enter size: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter element to search: ");
    scanf("%d",&key);
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            printf("Element found at %d place",i+1);
            found=1;
            break;
        }
    }
    if(found==0){
        printf("Element not found");
    }
    return 0;
}