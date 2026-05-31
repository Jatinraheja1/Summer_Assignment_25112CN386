#include<stdio.h>
int main(){
    int n,temp,sum,rem;
    printf("Enter the number upto which Armstrong numbers are to be printed: ");
    scanf("%d",&n);
    printf("Armstrong Numbers are:\n");
    for(int num=1; num<=n; num++){
        sum = 0;
        temp = num;
        while(temp > 0){
            rem = temp % 10;
            sum += rem * rem * rem;
            temp /= 10;
        }
        if(sum == num){
            printf("%d\n", num);
        }
    }
    return 0;
}