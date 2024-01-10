#include <stdio.h>
#include <math.h>

int main(){
    int a;
    while(scanf("%d", &a) != EOF){
        printf("%d %d %d\n", a, a*a, a*a*a);
    }
}