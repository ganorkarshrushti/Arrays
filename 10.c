//to Swap Elements in an Array using Pointers
#include<stdio.h>
void swapElements(int *ptr1,int *ptr2){
    int temp;
    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;

}
int main(){
    int n,arr[10],i,j,temp;

    printf("Enter size of array:");
    scanf("%d", &n);

    printf("Enter elements of array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int *ptr1 = &arr[0];   //first and last elements are chosen
    int *ptr2 = &arr[n - 1];
    swapElements(ptr1,ptr2);  //Call the function to swap elements
    printf("Array after swapping: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

