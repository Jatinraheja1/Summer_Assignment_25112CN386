#include<stdio.h>
int main(){
    int base, exp, result = 1;
    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exp);
    for(int i = 1; i <= exp; i++){
        result = result * base;
    }
    printf("%dth power of %d is : %d", exp,base,result);
    return 0;
}