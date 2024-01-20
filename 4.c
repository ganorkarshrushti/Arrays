#include<stdio.h>

int findMaximumDifference(int arr[], int n) {
    int maxDiff = arr[1] - arr[0];  // Initialize maxDiff with the difference of the first two elements

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[j] - arr[i] > maxDiff) {
                maxDiff = arr[j] - arr[i];
            }
        }
    }

    return maxDiff;
}

int main() {
    int arr[100], n, maxDiff;

    printf("Enter size of array:");
    scanf("%d", &n);

    printf("Enter elements of array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
     
    maxDiff = findMaximumDifference(arr, n); // Calling the function
    printf("Maximum difference is %d", maxDiff);

    return 0;
}
