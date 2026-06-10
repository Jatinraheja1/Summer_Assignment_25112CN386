#include<stdio.h>
int main(){
    int n,largest,secondlargest;
    prinf("Enter size of array :");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements of array :");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    largest=arr[0];
    secondlargest=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            secondlargest=largest;
            largest=arr[i];
        }
        else if(arr[i]>secondlargest && arr[i]!=largest){
            secondlargest=arr[i];
        }
    }
    printf("Second Largest = %d",secondlargest);
    return 0;
}