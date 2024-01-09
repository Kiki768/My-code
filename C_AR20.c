#include <stdio.h>

int main(){
    int n[129], num, num2;
    scanf("%d", &num);
    for(int i=0; i<129; i++){
        n[i] = 0;
    }
    for(int i=0; i<num; i++){
        scanf("%d", &num2);
        n[num2] += 1;
        if(n[num2] > 1){
            printf("0\n");
            return 0;
        }
    }
    printf("1\n");
}