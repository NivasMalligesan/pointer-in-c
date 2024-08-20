#include <stdio.h>

int findmissingnumber(int *array , int size){
    int expected = size * ((size+1)/2);
    int actual = 0;
    for(int i = 0 ; i < size ; i++){
        actual += array[i];
    }
    return expected-actual;
}


int main(){
    int size = 0 ; 
     printf("Enter the size of the array : ");
     scanf("%d",&size);
     
     int array[size];
     printf("Enter the size of the arraay : ");
     for(int i = 0 ; i < size ; i++){
         scanf("%d",&array[i]);
     }
     
     int result = findmissingnumber(array,size);
     printf("%d",result);
}
