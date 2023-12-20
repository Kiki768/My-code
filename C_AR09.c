#include <stdio.h>
#include <stdlib.h>

int main(){
    int array[7], i=0, max[7];
    while(scanf("%d,", &array[i])!=EOF){
        i++;
    }
    for(int j=0; j<i-1; j++){
        for(int k=0; k<i-j-1; k++){
            if(array[k] > array[k+1]){
                int tmp = array[k];
                array[k] = array[k+1];
                array[k+1] = tmp;
            }
        }
    }
    for(int j=0; j<i; j++){
        max[i-1-j] = array[j]; 
    }
    int minNum=0 ,maxNum=0, num=1;
    for(int j=0; j<i; j++){
        num = 1;
        for(int k=0; k<i-1-j; k++){
            num *= 10;
        }
        minNum += (array[j]-'0')*num;
        maxNum += (max[j]-'0')*num;
    }
    printf("%d\n", maxNum-minNum);
}