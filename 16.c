//to merge two sorted arrays
#include<stdio.h>
int main(){
        int i,j;    //i &j are loop counters
        int n,k;    //are size of 1st &2nd arrays
        int ind;    //Index for the merged arr.
        printf("enter size of 1st array:");
        scanf("%d",&n);
        int arr1[n];
        printf("Enter elements of 1st array in sorted order:\n");
        for (i = 0; i < n; i++) {
            scanf("%d", &arr1[i]);
        }
        printf("Enter the size of the second array: ");
        scanf("%d", &k);
        int arr2[k];
        printf("Enter elements of 2nd array in sorted order:\n");
        for (j = 0; j < n; j++) {
            scanf("%d", &arr2[j]);
        }
        int arr3[n+k];      //Merging the arrays
        i=j=ind=0;        // i& j Indices for arr1 and arr2

        while(i<n && j<k){
            if(arr1[i]<arr2[j]){
                arr3[ind++]=arr1[i++];
            }
            else{
                arr3[ind++]=arr2[j++];
            }
        }
        
        while(i<n){
                arr3[ind++]=arr1[i++];
        }
        while (j < k) {
            arr3[ind++] = arr2[j++];
        }
        printf("The merged array is: \n");
        for (ind = 0; ind < n + k; ind++) {
            printf("%d ", arr3[ind]);
}
printf("\n");
}

