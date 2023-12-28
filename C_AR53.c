#include <stdio.h>

int main(){
    int n, score[100];
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &score[i]);
    }
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(score[j] > score[j+1]){
                int tmp = score[j];
                score[j] = score[j+1];
                score[j+1] = tmp;
            }
        }
    }
    for(int i=0; i<n; i++){
        printf("%d\n", score[i]);
    }
}