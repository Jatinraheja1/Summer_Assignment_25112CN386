#include<stdio.h>
int armstrong(int );
int power(int ,int );
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(armstrong(n)){
        printf("Armstrong Number");
    }
    else{
        printf("Not an Armstrong Number");
    }
    return 0;
}
int power(int base,int exp){
    int result=1;
    for(int i=1;i<=exp;i++){
        result=result*base;
    }
    return result;
}
int armstrong(int n){
    if(n==0){
        return 1;
    }
    int temp=n,digits=0,sum=0;
    while(temp>0){
        digits++;
        temp/=10;
    }
    temp=n;
    while(temp>0){
        int rem=temp%10;
        sum+=power(rem,digits);
        temp/=10;
    }
    return sum==n;
}