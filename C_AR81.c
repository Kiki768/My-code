#include <stdio.h>

int main(){
    int matrix[3][3], a, b, c, ax, ay, bx, by;
    for(int i=0; i<3; i++){
        scanf("%d,%d,%d", &matrix[i][0], &matrix[i][1], &matrix[i][2]);
    }   
    a = matrix[0][0];
    b = matrix[0][0];
    c = matrix[0][0];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            // printf("%d ", matrix[i][j]);
            if(matrix[i][j] >= a){
                a = matrix[i][j];
                ax = i;
                ay = j;
            } 
            
        }
    }   
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if((matrix[i][j] <= a) && (matrix[i][j] > b) && (i!=ax||j!=ay)){
                b = matrix[i][j];
                bx = i;
                by = j;
            } 
        }
    }  
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(matrix[i][j] <= b && matrix[i][j] > c && (i!=ax || j!=ay) && (i!=bx || j!=by))c = matrix[i][j]; 
        }
    }     
    printf("%d\n", a+b+c);  
}