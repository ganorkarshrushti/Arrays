#include<stdio.h>
int main(){
    int n,i,j,arr[10];
    printf("ENter size of array:");
    scanf("%d",&n);
    printf("ENter elemnts of array:");
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
        if(arr[i]%2==1)
            printf("%d\n",arr[i]);
        }
    }
    
    