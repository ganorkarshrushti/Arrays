//to find the sum of all eleme* pointers as arguments.
#include<stdio.h>
int addnum(int *ptr){
    int index,total=0;
    for(index=0; index<5; index++){
        total=total+ *(ptr+index);
    }
    return(total);
  
}
int main(){
    int arr[5]={3,4,6,7,8};
    int sum;
    //int addnum(int *ptr);
    sum=addnum(arr);
    printf("Sum of all array elements = %5d\n", sum);
    return 0;
}

    