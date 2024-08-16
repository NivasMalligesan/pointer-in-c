// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int minsubarray(int* num,int numElements,int p){
    
    int totalsum = 0;
    for(int i = 0 ; i < numElements ; i++){
        totalsum += num[i];
    }
    
    int rem = totalsum % p;
    if(rem == 0){
     return 0 ;
    }
    
    int min_len = INT_MAX;
    
    for(int i = 0 ; i < numElements ; i++){
        int currentsum = 0 ;
        for(int j = i ; j < numElements ; j++){
            currentsum += num[j];
            if( (totalsum-currentsum)%p ==0 ){
                min_len = (j-i+1) < min_len ? (j-i+1) : min_len;
            }
        }
    }
    
    return min_len == INT_MAX ? 0 :  min_len;
    
}

int main() {
    int numElements ;
    printf("Enter the number of elements : ");
    scanf("%d",&numElements);
    
    int* num = (int*)malloc(numElements*sizeof(int));
    
    printf("Enter the Elements : ");
    for(int i = 0 ; i < numElements ; i++){
        scanf("%d",&num[i]);
    }
    
    int p = 0 ; 
    printf("Enter the valude of P : ");
    scanf("%d",&p);
    
    int result = minsubarray(num,numElements,p);
    printf("%d",result);
    
}
