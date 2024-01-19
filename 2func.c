//Finding Largest 2 numbers in an array
#include <stdio.h>

void printLargest2(int arr[], int n, int *firstLargest, int *secondLargest) {
    *firstLargest = arr[0];
    *secondLargest = arr[1];
    int temp;

    if (*firstLargest < *secondLargest) {
        temp = *firstLargest;
        *firstLargest = *secondLargest;
        *secondLargest = temp;
    }

    for (int i = 2; i < n; i++) {
        if (arr[i] > *firstLargest) {
            *secondLargest = *firstLargest;
            *firstLargest = arr[i];
        } else if (arr[i] > *secondLargest && arr[i] != *firstLargest) {
            *secondLargest = arr[i];
        }
    }
}

int main() {
    int n, arr[5], firstLargest, secondLargest;

    printf("Enter size of array:");
    scanf("%d", &n);

    printf("Enter %d elements in an array:", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printLargest2(arr, n, &firstLargest, &secondLargest);// calls above func. passing the array and pointers to firstLargest and secondLargest to find and store the two largest elem 

    printf("The FIRST LARGEST = %d\n", firstLargest);
    printf("THE SECOND LARGEST = %d\n", secondLargest);

    return 0;
}
