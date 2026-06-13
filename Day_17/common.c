#include <stdio.h>
int main() {
    int n1, n2;
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter elements of first array: ");
    for(int i=0;i<n1;i++) {
        scanf("%d",&arr1[i]);
    }
    printf("Enter size of second array: ");
    scanf("%d",&n2);
    int arr2[n2];
    printf("Enter elements of second array: ");
    for(int i=0;i<n2;i++) {
        scanf("%d",&arr2[i]);
    }
    printf("Common Elements: ");
    for(int i=0;i<n1;i++) {
        int alreadyPrinted = 0;
        for(int k=0;k<i;k++) {
            if(arr1[i] == arr1[k]) {
                alreadyPrinted = 1;
                break;
            }
        }
        if(alreadyPrinted)
            continue;
        for(int j=0;j<n2;j++) {
            if(arr1[i] == arr2[j]) {
                printf("%d",arr1[i]);
                break;
            }
        }
    }
    return 0;
}