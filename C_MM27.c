#include <stdio.h>

int main(){
    int a, b;
    while(scanf("%d%d", &a, &b) != EOF){
        int sum = 0;
        if(a > b){
            for(int i=0; i<a-b+1; i++){
                sum += b+i;
            }
        }
        else{
            for(int i=0; i<b-a+1; i++){
                sum += a+i;
            }
        }
        printf("%d\n", sum);
    }
}