#include <stdbool.h>
#include <stdio.h>

int main(){
    int size;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    int array[size];
    printf("Enter the elements of the array : ");
    for(int i = 0 ; i < size ; i++)
    scanf("%d",&array[i]);
    
    int frequency[101] = {0};
    
    for(int i = 0 ; i < size ; i++){
       
        frequency[array[i]]++;
       
    }
    int result = 0;
    
    for(int i = 1 ; i < 100 ; i ++){
        if(frequency[i] > 2 ){
            printf("False ")
            return 0;
        }else if(frequency[i] >= 1){
            result += frequency[i];
        }
    }
    if( result == size ){
    printf("true ");
        
    }
    else{
        printf("false ");
    }
}
