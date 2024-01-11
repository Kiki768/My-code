#include <stdio.h>

int main(){
    int s, k, m ,d;
    while(scanf("%d%d%d%d", &s, &k, &m, &d) != EOF){
        int sum = 0;
        sum += s;
        if(d >= m){
            sum += m*k;
            sum += (d-m)*(k+5);
        }
        else sum += d*k;
        printf("%d\n", sum);
    }
}