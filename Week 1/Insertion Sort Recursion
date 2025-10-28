#include <stdio.h>
#include <stdlib.h>

InsertionSort(int k, int n, int arr[]){

    if (k==n){
        return;
    }

    int curr = arr[k];
    int prev=k-1;

    while(prev >= 0 && arr[prev] > curr){

        arr[prev+1]=arr[prev];
        prev--;

    }

    arr[prev+1]=curr;

    return InsertionSort(k+1, n, arr);

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

    InsertionSort(k, n, arr);

    printf("Sorted: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
