#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int compare(int *array ,int size ){
    int even = 0 ; 
    int odd = 0 ;
    int max =1 ; 
    
    for(int i = 0 ; i < size ; i++){
        if(array[i] %2 == 0){
            even = odd +1;
        }else{
            odd = even +1;
        }
    }
    
    return even > odd ? even : odd ;
    
}

int main(){
    int size ;
    printf("Enter the size : ");
    scanf("%d",&size);
    
    int* array = (int*)malloc(size*sizeof(int));
    printf("Enter the elements : ");
    for(int i = 0 ; i < size ; i++){
        scanf("%d",&array[i]);
    }
    
    int result = compare(array,size);
    printf("%d",result);
}
