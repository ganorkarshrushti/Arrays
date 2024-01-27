//to Print the Square of Array Elem.
#include<stdio.h>
#define Max_Rows 3
#define Max_Cols 4
void printSquare(int arr[]){
    int i,x;
    int num [Max_Cols];
    for(int i=0; i < Max_Cols ; i++)
        printf("%d\n", arr[i] * arr[i]); //square of elem of array thats why arr*arr
}       
int main(){
    int i;
    int arr[Max_Rows][Max_Cols]={ {10,20,30},{50,60,70,80},{90,100,110,120} };
    for(i=0; i<Max_Rows; i++){
        printSquare(arr[i]);
    }
    return 0;
}