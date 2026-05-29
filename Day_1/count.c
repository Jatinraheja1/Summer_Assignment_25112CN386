#include<stdio.h>

int main() {
    int num, count = 0;

    printf("Enter the number: ");
    scanf("%d", &num);

    // Special case for 0
    if(num == 0) {
        count = 1;
    }
    else {
        while(num > 0) {
            num = num / 10;
            count++;
        }
    }

    printf("Digits in entered number is : %d", count);

    return 0;
}