#include <stdio.h>

int main(){
    int num, a, b;
    int account[6] = {123, 456, 789, 336, 775, 566}, password[6] = {456, 789, 888, 558, 666, 221}, money[6] = {9000, 5000, 6000, 10000, 12000, 7000};
    scanf("%d", &num);
    for(int i=0; i<num; i++){
        int check = 0l;
        scanf("%d%d", &a, &b);
        for(int j=0; j<6; j++){
            if(a == account[j]){
                if(b == password[j]){
                    printf("%d\n", money[j]);
                    check = 1;
                }
            }
        }
        if(check == 0)printf("error\n");
    }
}