#include <stdio.h>

int main(){
    int array[100];
    int i = 0;
    while(scanf("%d", &array[i])!=EOF){
        i++;
    }
    int num = i-1;
    i = i/2;
    for(int j=0; j<i; j++){
        int tmp = array[j];
        array[j] = array[num-j];
        array[num-j] = tmp;
    }
    for(int j=0; j<=num; j++){
        if(j==num)
            printf("%d\n", array[j]);
        else
            printf("%d ", array[j]);
    }
}