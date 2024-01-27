//to Input a String & Store their Ascii Values in an Integer Array & Print the Array
//Ascii values?ASCII reserves the first 32 code points (numbers 0–31 decimal) and the last one (number 127 decimal) for control characters
#include <stdio.h>
int main(){
    char string[20];
    int n,count=0;
     printf("Enter the no of characters present in an array \n ");
        scanf("%d", &n);
    printf(" Enter the string of %d characters \n" , n);
        scanf("%s", string);
    while(count<n){
        printf("%c=%d\n", string[count],string[count]);
        count++;

    }
    return 0;

}
 