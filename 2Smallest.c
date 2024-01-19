//Finding Largest 2 numbers in an array
#include<stdio.h>

int main(){
    int n,arr[5],firstLargest,secondLargest,temp;
    printf( "Enter size of array:");
    scanf("%d",&n);
    printf("Enter %d elements in an array:",n);
    for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        firstLargest=arr[0];
        secondLargest=arr[1];
        if (firstLargest < secondLargest)
        {
            temp = firstLargest;
            firstLargest =secondLargest;
            secondLargest = temp;
        }
        for(int i=2;i<n;i++){
            if(arr[i]>firstLargest) {    //for 1stL
            secondLargest=firstLargest;
            firstLargest=arr[i];
        }
        else if(arr[i]>secondLargest && arr[i]!=firstLargest){
                secondLargest=arr[i];
        }
        }
        printf ("The FIRST LARGEST = %d\n", firstLargest);
        printf ("THE SECOND LARGEST = %d\n",secondLargest );
 
    return 0;
}


