#include <stdio.h>

int main(){
    int az[26], num;
    char word;
    scanf("%d",&num);
    for(int i=0; i<26; i++){
        az[i] = 0;
    }
    
    for(int i=0; i<num; i++){
        scanf(" %c", &word);
        az[word-'a'] += 1;
    }
    for(int i=0; i<26; i++){
        if(az[i] != 0){
            printf("%c %d\n", i+'a', az[i]);
        }
    }
}