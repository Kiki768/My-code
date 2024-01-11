#include <stdio.h>

int main(){
    int a;
    while(scanf("%d", &a) != EOF){
        for(int i=35; i<=a; i+=35){
            if(a-i < 35)printf("%d\n", i);
            else printf("%d ", i);
        }
    }
}