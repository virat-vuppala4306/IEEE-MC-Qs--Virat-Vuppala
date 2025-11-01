#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements of the array: \n");

    for(int i=0; i<n; i++){

        scanf("%d", &arr[i]);

    }

    printf("Unsorted Array: \n");

    for(int i=0; i<n; i++){

        printf("%d \t", arr[i]);

    }

    printf("\nChoose Sorting Method- ");

    printf("\n1. Bubble Sort \n2. Selection Sort \n3. Insertion Sort\n");
    int choice;
    scanf("%d", &choice);

    switch(choice){

        case 1:
        BubbleSort(n, arr);
        break;

        case 2:
        SelectionSort(n, arr);
        break;

        case 3:
        InsertionSort(n, arr);
        break;

    }
    return 0;
}


    BubbleSort(int n, int arr[]){

        int temp;

        for(int j= 0; j < n; j++){

            for(int i=0; i<n; i++){

                if(arr[i] > arr[i+1]){

                    temp = arr[i+1];
                    arr[i+1] = arr[i];
                    arr[i] = temp;

                }

            }
        }
        printf("\nSorted Array:\n");

        for(int i=0; i<n; i++){

            printf("%d \t", arr[i]);

        }

    }


    SelectionSort(int n, int arr[]){

        int temp;
        for(int i = 0; i<n; i++){
        int min = arr[i];
            for (int j = i+1; j < n; j++){

                if (arr[j] < min){

                    min = arr[j];
                }

                temp = arr[i];
                arr[i] = min;
                arr[j] = temp;
            }

        }

        printf("\nSorted Array:\n");

        for(int i=0; i<n; i++){

            printf("%d \t", arr[i]);

        }

    }

    InsertionSort(int n, int arr[]){

        int j, temp;
        for (int i = 1; i < n; i++) {
            temp = arr[i];
            j = i - 1;

            while (j >= 0 && arr[j] > temp) {
                arr[j + 1] = arr[j];
                j = j - 1;
            }
            arr[j + 1] = temp;
        }

        printf("\nSorted Array:\n");
        for (int i = 0; i < n; i++) {
            printf("%d \t", arr[i]);
        }
    }

