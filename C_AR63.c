#include <stdio.h>

int main(){
    int rows, cols;
    scanf("%d%d", &rows, &cols);
    int matrix1[100][100], matrix2[100][100];
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            scanf("%d", &matrix1[i][j]);
        }
    }
    scanf("%d%d", &rows, &cols);
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            scanf("%d", &matrix2[i][j]);
        }
    }
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            matrix1[i][j] += matrix2[i][j];
            if(j == cols-1)
                printf("%d\n", matrix1[i][j]);
            else
                printf("%d ", matrix1[i][j]);
        }
    }
    
}