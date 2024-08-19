#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

bool cmp(const char* word , char* row){
    
    for(int i = 0 ;word[i] != '\0'; i++){
    char letter = tolower(word[i]);
    if(strchr(row,letter) == NULL ){
        return false;
        }
    }
    return true;
}

void checkinrow(char word[][100] , int size){
    char* row1 ="qwertyuiop";
    char* row2 ="asdfghjkl";
    char* row3 = "zxcvbnm";
    
    for(int i = 0 ; i < size ; i++){
        if(cmp(word[i],row1) || cmp(word[i],row2) || cmp(word[i],row3)){
            printf("%s ",word[i]);
        }
    }
    
}


int main() {
    int number_of_words ;
    printf("Enter the number of words : ");
    scanf("%d",&number_of_words);
    
    char word[number_of_words][100];
    
    for(int i = 0 ; i < number_of_words ; i++){
        scanf("%s",word[i]);
    }
    
    checkinrow(word,number_of_words);
}
