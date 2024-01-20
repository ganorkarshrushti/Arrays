//Reverse element frm array
#include<stdio.h>
int main(){
    int arr[10],n,i;
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("Enter elements of an array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int start=0;
    int end=n-1;
    while(start<end){
        int temp=arr[start];   //Swapping elements
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    printf("the rversed array is:");
    for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
    return 0;
}



