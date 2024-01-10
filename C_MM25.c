#include <stdio.h>

int main(){
    int a;
    while(scanf("%d", &a) != EOF){
        int sum = 0;
        for(int i=0; i<a+1; i+=3){
            sum += i;
        }
        printf("%d\n", sum);
    }
}