// linear Search // Jump Search

#include "stdio.h"

int linearSearch(int arr[],int arrSize , int key){

    for(int i=0; i<arrSize; i++ ){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main(){

    int myArray[]={99,1,5,20,8,19,3,4,0,2,100,200,300,95};
    int key=0;
    printf("Please enter number to Search:");
    scanf("%d",&key);

    int arrSize = sizeof(myArray)/sizeof(myArray[0]);

    int foundIndex = linearSearch(myArray,arrSize,key);

   if(foundIndex !=-1){
       printf("We found Data at index %d",foundIndex);
   } else{
       printf("We cannot found:");
   }

    return 0;
}
