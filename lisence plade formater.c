#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char* formater(char* s , int k){
    int len = strlen(s);
    int count = 0 ; 
    for(int i = 0 ; i < len ; i ++){
        if(s[i]!='-'){
            count++;
        }
    }
    
    int lenformate = count + (count-1)/k;
    char *formated = (char*)malloc(lenformate*sizeof(char));
    
    int index = lenformate-1;
    for(int i = len-1 ; i >= 0 ; i--){
        if(s[i] != '-'){
            formated[index--] = toupper(s[i]);
            if((len-i)%k == 0 && index>= 0){
                formated[index--] = '-';
            }
        }
    }
    
    return formated;
}

int main(){
    char s[100];
    printf("Enter the lisence plate number : ");
    scanf("%s",s);
    
    int k = 0 ; 
    printf("Enter the lisence plate formate :  ");
    scanf("%d",&k);
    
    char* result = formater(s,k);
    printf("%s",result);
}
