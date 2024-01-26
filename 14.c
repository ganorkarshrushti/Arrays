//to accept N numbers and arrange them in an ascending order (kind of bubble sort only)
#include<stdio.h>
int main(){
    int n,i,j,arr[10],a;
    printf("Enter the value of N");
    scanf("%d",&n);
    printf("Enter the number ");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++){      // represents each pass through the list
        for(j=0;j<n;j++){    // compares adjacent elements and swaps them if necessary
            if (arr[i] > arr[j]) //ascending condn
                {
                    a=arr[i];    //current elem ,is greater than the element being compared (arr[j]), and if true, the elements are swapp
                    arr[i]=arr[j];
                    arr[j]=a;
                }
        }
    }
    printf("The numbers arranged in ascending order are ");
    for(i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
}
//to accept N numbers and arrange them in an descending order
//(just reverse above code condition  if (arr[i] < arr[j])  that's it)