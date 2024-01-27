//To print K-th element frm array
/*#include<stdio.h>
int main(){
    int n,i,j,arr[10],index;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter elements of array:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter which Kth number you want ");
    scanf("%d",&n);
    printf("The %dth Kth number is:%d",n,arr[n-1]);
    return 0;
}*/

//Using Functions 
#include<stdio.h>
int KthElement(int arr,int n,int index){
    printf("Enter which Kth number you want ");
    scanf("%d",&n);
    //printf("The %dth Kth number is:%d",n,arr[n-1]);
    return KthElement;
}
int main(){
    int n,i,j,arr[10],index;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter elements of array:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    KthElement( arr, n, index);
    printf("The %dth Kth number is:%d",n,arr[n-1]);
    return 0;
}