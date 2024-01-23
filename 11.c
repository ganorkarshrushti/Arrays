 //to Find Sum of Array Elements using Pointer
 /*#include<stdio.h>
 int main(){
        int i,sum=0,n;
        int *a;
        a = (int *) malloc(n * sizeof(int));
        printf("Enter size of array:");
        scanf("%d",&n);
        printf("Enter no. of elements:");
        for(i=0;i<n;i++){
            scanf("%d",a+i);
        }
        for (i = 0; i < n; i++)
        {
		    sum = sum + *(a + i); 
        }
        printf("Sum of all elemnts in array:%d\n",sum);
        return 0;
              
	}*/

  #include<stdio.h>
  void sumArray(int *a,int n)  {
        
        int sum=0,i;
        for (i = 0; i < n; i++)
        {
		    sum = sum + *(a + i); 
        }
        //printf("Sum of all elements in array: %d\n", sum);
  }
  int main(){
        int n,i,sum=0;
        int *a;
        // Allocate memory for the array
        a = (int *)malloc(n * sizeof(int));

        printf("Enter size of array:");
        scanf("%d",&n);
        printf("Enter no. of elements:");
        for(i=0;i<n;i++){
            scanf("%d",a+i);
        }
        sumArray( a, n);
        for (i = 0; i < n; i++) {
        sum = sum + *(a + i);
    }

        printf("Sum of all elemnts in array:%d\n",sum);
        free(a);      // Free the allocated memory
        return 0;
        
  }
 


 
