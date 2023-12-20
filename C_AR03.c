#include <stdio.h>

int main(){
    int array[6], sum=0;
    for(int i=0; i<6; i++){
        scanf("%d", &array[i]);
    }
    for(int i=0; i<6; i++){
        sum += array[i]*array[i]*array[i];
    }
    printf("%d\n", sum);
}