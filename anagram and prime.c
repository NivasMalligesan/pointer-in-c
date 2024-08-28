// Online C compiler to run C program online
#include <stdio.h>

void isanagram(int first, int next){
    int freq1[10] = {0};int freq2[10] = {0};
    int tempfirst = first ; 
    int tempnext = next;
    int anagram = 1;
    while(first > 0){
        int rem = first % 10 ;
        freq1[rem]++;
        first/=10;
    }
    while(next > 0){
        int rem = next % 10 ;
        freq2[rem]++;
        next/=10;
    }
    
    for(int i = 0 ; i < 10 ; i ++){
        if(freq1[i] != freq2[i]){
        anagram = 0;
        break;
        }
    }
    
    if(anagram){
        printf("(%d %d)\n",tempfirst,tempnext);
    }
    
    
}

int select(int* prime , int k){
    for(int i = 0 ; i < k ; i ++){
        int first = prime[i];
        for(int j = i+1 ; j < k ; j++){
        int next = prime[j];
        isanagram(first,next);
            
        }
    }
}

int main() {
    int start = 0 ;
    int end = 0 ; 
    scanf("%d",&start);
    scanf("%d",&end);
    int prime[100];
    int k = 0 ; 
    
    for(int i = start ; i <= end ; i ++){
        int isprime = 1 ;
        for(int j = 2 ; j < i / 2 ; j ++){
            if(i%j == 0){
                isprime =0;
                break;
            }
        }
        if(isprime){
            prime[k++] = i ; 
        }
    }
    
    select(prime,k);
}
