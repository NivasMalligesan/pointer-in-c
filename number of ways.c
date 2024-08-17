#include <stdio.h>
#include <stdlib.h>

int step(int number){
    if(number <=0){
        printf("Invalid");
    }
    int ways[number+1];
    ways[0] = 1;
    ways[1] = 1 ;
    
    for(int i = 2 ; i <= number ; i++){
        ways[i] = ways[i-1]+ways[i-2];
    }
    
    return ways[number];
}

int main(){
    int number ; 
    printf("Enter the size : ");
    scanf("%d",&number);
    
    int result = step(number);
    printf("%d",result);
    
}
