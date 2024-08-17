#include <stdio.h>
#include <stdlib.h>

int main(){
    int size;
    printf("Enter the size of the array");
    scanf("%d",&size);
    
    int* array = (int*)malloc(size*sizeof(int));
    printf("Enter the elements : ");
    for(int i = 0 ;i < size; i++ )
    scanf("%d",&array[i]);
    
    int* product = (int*)malloc(size*sizeof(int));
   
    
    for(int i = 0 ; i < size ; i ++){
        
        int p = 0 ; 
        for(int l = 0 ; l < size ; l++){
        p += l * array[l];
        }
        
        product[i] = p;
        
        int temp = array[0];
        for(int j = 0 ; j < size-1 ; j++){
            array[j] = array[j+1]; 
        }
        array[size-1] = temp;
   
}

    
    for(int i = 0 ; i < size-1 ;i ++){
        for(int j = i+1 ; j < size ;j++){
            if(product[i] < product[j]){
                int temp = product[i];
                product[i] = product[j];
                product[j] = temp;
            }
        }
    }
    
    
    printf("%d ",product[0]);
    
    
    
}
