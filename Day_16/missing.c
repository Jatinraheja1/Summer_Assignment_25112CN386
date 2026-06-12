#include<stdio.h>
int main(){
    int n,sum=0,total=0;
    printf("Enter n: ");
    scanf("%d",&n);
    if(n <= 1){
    printf("Invalid input");
    return 0;
}
    int arr[n-1];
    printf("Enter elements in a sequence :\n");
    for(int i=0;i<n-1;i++){
        scanf("%d",&arr[i]);
        sum += arr[i];
    }
    total = n*(n+1)/2;
    printf("Missing Number in that sequence = %d",total-sum);
    return 0;
}