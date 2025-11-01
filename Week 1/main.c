#include <stdio.h>
#include <stdlib.h>

BubbleSort(int k, int n, int arr[]){

    if(k==n-1){

        return;
    }

    int temp = 0;

    for(int i=0; i<n; i++){

        if(arr[i]>arr[i+1]){

            temp = arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;

        }

    }

    return BubbleSort(k+1, n, arr);

}


int main()
{
    int n;
    int k=0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("You entered: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    BubbleSort(k, n, arr);

    printf("Sorted: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
