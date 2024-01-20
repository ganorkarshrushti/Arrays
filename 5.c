//To insert an elem in an array at any position
#include<stdio.h>
int main(){
    int arr[6],n,i,index,x;
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("Enter %d elements in an array:",n);
    for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        printf("Enter new element to be inserted in an array:");
        scanf("%d",&x);
        printf("Enter the index where element is to be inserted: ");
        scanf("%d", &index);
        n=n+1;    //increasing size of arr by 1,as we're going to insert a new elem
        for(int i=n-1; i>=index; i--){    //in this loop starting from last index of arr we hav to move each elem 1 posn forward, until u reach posn the new elem to be inserted.
            arr[i]=arr[i-1];
        }
        arr[index-1]=x; //Insert the element x on the specified position

        
        for( int i = 0; i < n; i++){     // //printing array after insertion
            printf("%d ", arr[i]);   
        } 
        return 0;
}
        





 
