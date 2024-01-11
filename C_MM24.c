#include <stdio.h>
#include <math.h>

int main(){
    double salary, hour;
    while(scanf("%lf%lf", &hour, &salary) != EOF){
        int sum = 0;
        if(hour > 0){
            if(hour > 60){
                sum += 60*salary;
            }
            else{
                printf("%.1lf\n", round((salary*hour)*10)/10.0);
                continue;
            }
        }
        if(hour >= 61){
            if(hour > 120)sum += 60*salary*1.33;
            else{
                printf("%.1lf\n", round((sum+(hour-60)*salary*1.33)*10)/10.0);
                continue;
            }
        }
        printf("%.1lf\n", round((sum+(hour-120)*salary*1.66)*10)/10.0);
    }
}