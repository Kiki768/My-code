#include <stdio.h>
#include <math.h>

int main(){
    float num, score[200][3], sum = 0;
    float chinese = 0, english = 0, math = 0;
    scanf("%f", &num);
    for(int i=0; i<num; i++){
        for(int j=0; j<3; j++){
            scanf("%f", &score[i][j]);
            sum += score[i][j];
            if(j == 0)chinese += score[i][j];
            else if(j == 1)english += score[i][j];
            else if(j == 2)math += score[i][j];
        }
    }
    printf("%.1f %.1f %.1f %.1f\n", round((sum/(num*3))*10)/10.0, round((chinese/num)*10)/10.0, round((english/num)*10)/10.0, round((math/num)*10)/10.0);

}