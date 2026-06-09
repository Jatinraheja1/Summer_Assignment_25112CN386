#include<stdio.h>
int perfect(int );
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(perfect(n)){
        printf("Perfect Number");
    }
    else{
        printf("Not a Perfect Number");
    }
    return 0;
}
int perfect(int n){
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    return (sum==n);
}