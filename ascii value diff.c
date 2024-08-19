#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int scorefun(char* word){
    int size = strlen(word);
    int score = 0 ;
    for(int i = 0 ; i < size -1 ; i++){
        int diff = abs(word[i] - word[i+1]);
        score += diff;
    }
    return score;
}



int main(){
    char word[100];
    printf("Enter the word :  ");
    scanf("%s",word);
    
    int result = scorefun(word);
    printf("%d",result);
}
