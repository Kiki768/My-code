#include <stdio.h>

int main(){
    double a;
    while(scanf("%lf", &a) != EOF){
        if(a <= 800) printf("%.1lf\n", a*0.9);
        else if(a > 800 && a < 1500)printf("%.1lf\n", a*0.9*0.9);
        else printf("%.1lf\n", a*0.9*0.79);
    }
}