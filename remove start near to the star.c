#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char* removestar(char* word){
    int len = strlen(word);
    int index= 0 ;
    char* result =(char*)malloc((len+1)*sizeof(char));
    for(int i = 0 ; i < len ; i++){
        if(word[i] == '*'){
            if(index > 0){
                index--;
            }
        }
            else{
                result[index++] = word[i];
            }
            
        }
    
    result[index] = '\0';
    return result;
}


int main(){
    char word[100];
    printf("Enter the word : ");
    scanf("%s",word);
    
    char* result = removestar(word);
    printf("%s",result);
    
}
