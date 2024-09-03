// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void formater(char* string , int formate){
    int len = strlen(string);
    int count =  0 ; 
    
    for(int i = 0  ; i < len ; i++){
        if(string[i] != '-'){
            count++;
        }
    }
    
    
    int formated_size = count+(count-1)/formate ;
    char* formated = (char*)malloc(formated_size*sizeof(char));
    int index = formated_size-1;
    
    int group = 0;
    for(int i = len-1 ; i>=0;i--){
        if(string[i]!='-'){
            formated[index--] = string[i];
            group++;
            if(group == formate   && index >= 0){
                formated[index--] = '-';
                group = 0;
            }
        }
    }
    
    printf("%s",formated);
    
}

int main(){
    char string[100];
    printf("Enter the string : ");
    scanf("%s",string);
    
    int f = 0 ; 
    printf("Enter the formate : ");
    scanf("%d",&f);
    
    formater(string , f);
}
