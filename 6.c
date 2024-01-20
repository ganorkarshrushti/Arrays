//to Delete an Element from an Array(Delete Element by Index)
/*#include<stdio.h>
int main()
{
    int i, n, index, arr[10];
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: \n");
    for (i = 0; i < n; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    printf("Enter the index of the element to be deleted: ");
    scanf("%d", &index);
    for(i = index; i < n - 1; i++){
        arr[i] = arr[i + 1];
    }
    printf("The array after deleting the element is: ");
    for (i = 0; i < n - 1; i++)
        printf("%d ", arr[i]);
        return 0;
}*/
//using function
#include<stdio.h>

void deleteElementByIndex(int arr[], int n, int index) {
    for(int i = index; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
}

int main() {
    int i, n, index, arr[10];

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: \n");
    for (i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("Enter the index of the element to be deleted: ");
    scanf("%d", &index);

    if (index >= 0 && index < n) {
        deleteElementByIndex(arr, n, index);
        printf("The array after deleting the element is: ");
        for (int i = 0; i < n - 1; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    } else {
        printf("Deletion is not possible. Index is out of bounds.\n");
    }

    return 0;
}
