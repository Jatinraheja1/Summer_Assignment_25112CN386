#include<stdio.h>
int main(){
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int choice;
    do{
        printf("\n--- Array Operations ---\n");
        printf("1. Display Array\n");
        printf("2. Sum of Elements\n");
        printf("3. Largest Element\n");
        printf("4. Search Element\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("Array: ");
                for(int i=0;i<n;i++){
                    printf("%d ",arr[i]);
                }
                printf("\n");
                break;
            case 2:
                int sum=0;
                for(int i=0;i<n;i++){
                    sum+=arr[i];
                }
                printf("Sum = %d\n",sum);
                break;
            case 3:
                int largest=arr[0];
                for(int i=1;i<n;i++){
                    if(arr[i]>largest){
                        largest=arr[i];
                    }
                }
                printf("Largest = %d\n",largest);
                break;
            case 4:
                int key,found=0;
                printf("Enter element to search: ");
                scanf("%d",&key);
                for(int i=0;i<n;i++){
                    if(arr[i]==key){
                        printf("Found at index %d\n",i);
                        found=1;
                        break;
                    }
                }
                if(!found){
                    printf("Not Found\n");
                }
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid Choice\n");
        }
    }while(choice!=5);
    return 0;
}