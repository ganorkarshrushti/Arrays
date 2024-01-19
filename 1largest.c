//To find first largest/biggest element frm an array
#include<stdio.h>
int main(){
    int i,n,arr[n];
    printf("Enter size of the array:");
    scanf("%d",&n);
    
    printf("Enter %d elements \n:",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int largest=arr[0];
    for(int i=1;i<n;i++){
        if(largest<arr[i]){  //if largest elem is small comp. to current elem ,then Larg updated with curr. elem value
        largest=arr[i];
        }
    }
    printf("largest elem is:%d\n",largest);
    return 0;
}
