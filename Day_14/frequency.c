#include<stdio.h>
int main(){
    int n,key,count=0,arr[n];
    printf("Enter size of array :");
    scanf("%d",&n);
    printf("Enter elements of array :");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter element whose frequency is to be checked : ");
    scanf("%d",&key);
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            count++;
        }
    }
    printf("Frequency = %d",count);
    return 0;
}