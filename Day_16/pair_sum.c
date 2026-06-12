#include<stdio.h>
int main(){
    int n,target;
    printf("Enter size of array :");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements of array :");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter target sum: ");
    scanf("%d",&target);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                printf("%d + %d = %d",arr[i],arr[j],target);
                return 0;
            }
        }
    }
    printf("No pair found");
    return 0;
}