//Using Function
#include<stdio.h>

// Function to find second largest and smallest numbers in an array
void printSecondLargestSmallest(int arr[], int n) {
    int i, j, a, counter, average;

    // Sorting in descending order using bubble sort algorithm
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] < arr[j]) {
                a = arr[i];
                arr[i] = arr[j];
                arr[j] = a;
            }
        }
    }

    printf("The numbers arranged in descending order are given below \n");

    for (i = 0; i < n; ++i) {
        printf("%d\n", arr[i]);
    }

    printf("The 2nd largest number is  = %d\n", arr[1]);
    printf("The 2nd smallest number is = %d\n", arr[n - 2]);

    average = (arr[1] + arr[n - 2]) / 2;
    counter = 0;

    for (i = 0; i < n; ++i) {
        if (average == arr[i]) {
            ++counter;
        }
    }

    if (counter == 0) {
        printf("The average of %d  and %d is = %d is not in the array \n", arr[1], arr[n - 2], average);
    } else {
        printf("The average of %d  and %d in the array is %d occurrences \n", arr[1], arr[n - 2], counter);
    }
}

int main() {
    int n, i, arr[10];

    printf("Enter size of array:");
    scanf("%d", &n);

    printf("Enter elements of the array:");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printSecondLargestSmallest(arr, n);

    return 0;
}