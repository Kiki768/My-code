#include <stdio.h>

int main(){
    int sum = 0;
    for(int i=0; i<5; i+=1){ 
        char card[3];
        scanf("%2s", &card);
        // printf("%s\n", card);
        if(card[0] == 'A')sum += 14;
        else if(card[0] == 'J')sum += 11;
        else if(card[0] == 'Q')sum += 12;
        else if(card[0] == 'K')sum += 13; 
        else if(card[0] == '1' && card[1] == '0')sum += 10;
        else sum += card[0] - '0';
    }
    printf("%d\n", sum);
}
