#include <stdio.h>
#include <math.h>

int main(){
    double a;
    while(scanf("%lf", &a) != EOF){
        printf("%.1lf\n", round((a*1.6)*10)/10.0);
    }
}
