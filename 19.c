#include <stdio.h>

int main() {
    int n, i, arr[10];

    printf("Enter size of an array: ");
    scanf("%d", &n);

    printf("Enter elements of an array:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Alternate elements of the given array:\n");
    for (i = 0; i < n; i = i + 2)  //i=i+2 for gettimg an alternate sequence
        printf("%d\n", arr[i]);

    return 0;
}
