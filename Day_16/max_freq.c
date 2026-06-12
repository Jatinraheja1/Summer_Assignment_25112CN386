#include<stdio.h>
int main(){
    int n;
    printf("Enter size of array :");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements of array :");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int maxFreq=0;
    int maxElement=arr[0];
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>maxFreq){
            maxFreq=count;
            maxElement=arr[i];
        }
    }
    printf("Maximum Frequency Element = %d\n",maxElement);
    printf("Frequency = %d",maxFreq);
    return 0;
}