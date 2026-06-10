#include<stdio.h>
int main(){
    int n,sum=0;
    float average;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements:\n");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    average = (float)sum / n;
    printf("Sum=%d\n",sum);
    printf("Average=%.2f",average);
    return 0;
}