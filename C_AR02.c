#include <stdio.h>  
  
int main(){  
    int array[6];   
    for(int i=0; i<6; i++){
        scanf("%d", &array[i]);
    }  
    for(int j=0; j<3; j++){  
        int tmp = array[j];  
        array[j] = array[5-j];  
        array[5-j] = tmp;  
    }  
    for(int j=0; j<6; j++){  
        if(j==5)  
            printf("%d\n", array[j]);  
        else  
            printf("%d ", array[j]);  
    }  
}  