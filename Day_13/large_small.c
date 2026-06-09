#include<stdio.h>
int main(){
    int n,arr[n];
    printf("Enter size of array: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int largest=arr[0];
    int smallest=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }
    printf("Largest = %d\n",largest);
    printf("Smallest = %d\n",smallest);
    return 0;
}