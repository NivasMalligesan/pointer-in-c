#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void binary(char word[], int size , char target){

    int left = 0 ; 
    int right = size-1;
    
    while(left < right){
        int mid = left + (right-left)/2;
        if(word[mid] > target){
            right = mid;
        }else{
            left = mid + 1;
        }
    }
    printf("%c",word[left]);
}


int main(){
    int size ; 
    printf("Enter the Size : ");
    scanf("%d",&size);
    getchar(); 
    
    char* word = (char*)malloc(size*sizeof(char));
    printf("Enter the elements : ");
    for(int i = 0 ; i < size ; i++){
        scanf("%c",&word[i]);
    }
    char target;
    printf("Enter the target : ");
    scanf("%c",&target);
    
    binary(word,size,target);
    free(word);
}
