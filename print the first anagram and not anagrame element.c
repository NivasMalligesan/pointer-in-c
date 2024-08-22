// Online C compiler to run C program online
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isanagram(char* word1, char* word2){
    int char1[26] = {0};
    int char2[26] = {0};
    
    for(int i = 0 ; i  < strlen(word1) ; i++){
        char1[word1[i] - 'a']++;
    }
    for(int i = 0 ; i  < strlen(word2) ; i++){
        char1[word2[i] - 'a']--;
    }
    
    for(int i = 0 ; i < 26 ; i++){
        if(char1[i] != 0){
            return false;
        }
    }
    return true;
}



int main() {
    int size = 0 ; 
    scanf("%d",&size);
    char word[size][100];
    for(int  i = 0 ; i < size ; i ++){
        scanf("%s",word[i]);
    }
    
    int printed[size];
    
    for(int i = 0 ; i < size ; i++){
        if(!printed[i]){
            printf("%s\n",word[i]);
            printed[i] = 1;
            for(int j = i+1 ; j < size ; j++){
                if(!printed[j] && isanagram(word[i],word[j])){
                    printed[j]= 1;
                }
            }
        }
    }
    
    for(int i = 0 ; i < size ; i++){
        if(!printed[i]){
            printf("%s\n",word[i]);
        }
    }
    
}
