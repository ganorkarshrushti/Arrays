//to Increment All Elements of an Array by One

#include<stdio.h>

void incrementArray(int arr[]) {
    int i;
    for(i = 0; i < 4; i++)
        arr[i]++;
}

int main() {
    int i;
    int arr[4] = {10, 20, 30, 40};
    incrementArray(arr);

    for (i = 0; i < 4; i++)
        printf("%d\t", arr[i]);

    return 0; // Indicate successful completion
}
