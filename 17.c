/*#include<stdio.h>
int main(){
    int n,i,j,arr[10];
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter elements of array:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Even no.s in array are:\n");
    for(int i=0;i<n;i++){
        if(arr[i]%2==0)
            printf("%d\n",arr[i]);
    }
    
    printf("Odd no.s in array are:\n");
    for(int i=0;i<n;i++){
        if(arr[i]%2 == 1)
            printf("%d\n",arr[i]);
        }
    }
*/

#include<stdio.h>
void EvenOdd(int arr[],int n){
    printf("Even no.s in array are:\n");
    for(int i=0;i<n;i++){
        if(arr[i]%2==0)
            printf("%d\n",arr[i]);
    }
    
    printf("Odd no.s in array are:\n");
    for(int i=0;i<n;i++){
        if(arr[i]%2 == 1)
            printf("%d\n",arr[i]);
        }
    }
    int main(){
        int n,i,arr[10];
        printf("Enter the size of array:");
        scanf("%d",&n);
        printf("Enter elements of array:");
        for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    EvenOdd(arr,n);
    return 0;

    }
    