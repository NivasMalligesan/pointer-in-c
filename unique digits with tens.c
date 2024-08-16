#include <stdio.h>

int rescount(int n){
    if(n == 0){
        return 1;
    }
    
    int count = 10;
    int available = 9;
    
    for(int i = 1 ; i < n ; i++){
        count += available*(10-i);
        available--;
    }
    
    return count;
}

int main(){
    int n ;
    printf("Enter the number ");
    scanf("%d",&n);
    
    int result = rescount(n);
    printf("%d",result);
}
