//To remove duplicate  Elements from an Array
#include<stdio.h>
int main(){
    int n, i, j, arr[10];
    // Input size of the array
    printf("Enter size of array: ");
    scanf("%d", &n);

    // Input elements of the array
    printf("Enter elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int temp[n]; // To store unique elements after removing duplicates
    int count = 0; // Count of unique elements in 'temp'

    for (i = 0; i < n; i++) {
        int j;
        // Check if the current element is already in 'temp'
        for (j = 0; j < count; j++) {
            if (arr[i] == temp[j]) {
                //break;
            }
        }
        // If the element is not found in 'temp', add it to 'temp'
        if (j == count) {
            temp[count] = arr[i];
            count++;
        }
    }
    // Print the unique elements after removing duplicates
    printf("\nArray After Removing Duplicates: ");
    for (i = 0; i < count; i++) {
        printf("%d ", temp[i]);
    }
    return 0;
}
