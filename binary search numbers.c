#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

int binarysearch(int* array,int size,int target){
    int left  = 0 ; 
    int right = size - 1;
    
    while(left < right ){
        int mid = left + (right-left)/2;
        if(array[mid] == target){
            return array[mid];
        }else if(array[mid] > target){
            right = mid;
        }else{
            left = mid+1;
        }
    }
    return array[left];
}


int main(){
    int size ;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    
    int* array = (int*)malloc(size*sizeof(int));
    
    printf("Enter the elements : ");
    for(int i = 0 ; i < size ; i++){
    scanf("%d",&array[i]);
    }
    int target = 0;
    printf("Enter the target : ");
    scanf("%d",&target);
    
    int result =  binarysearch(array,size,target);
    printf("Result : %d",result);
}
