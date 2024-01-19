#include<stdio.h>
int printLargest(int arr[],int n,int *largest){
    *largest=arr[0];
    for(int i=1;i<n;i++){
        if(*largest < arr[i]){
             *largest = arr[i];
        }
    }
    return *largest;
}
    
int main(){
    
    int arr[5],n,largest;
    printf("Enter size of array:");
    scanf("%d",&n);

    printf("Enter %d elements in an array:",n);
    for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        largest=printLargest( arr,n,&largest);
        printf("The largest element is:%d\n",largest);
        return 0;
}

