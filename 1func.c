//1)
#include<stdio.h>
int printLargest(int arr[],int n){
    int largest=arr[0];
    for(int i=1;i<n;i++){
    if(largest<arr[i]){
        largest=arr[i];
    }
    }
    //printf("largest Element is:%d\n",largest);
    return largest;
}
int main()
{
    int arr[5],n,i,largest;
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("Enter %d elements in an array:",n);
    for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        largest=printLargest( arr,n);
        printf("The largest element is:%d\n",largest);
        return 0;
}
