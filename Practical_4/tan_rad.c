#include <stdio.h>
#include <math.h>

/*define variables and function to return radian*/
float tan_rad(float Deg);
int N = 12, i;

/*create function that returns radians when given degrees*/
float tan_rad(float Deg){
        return((M_PI*Deg)/180);
}

int main(){
/*define array that will be used to hold converted tan values*/
/*define varaibles deg, rad*/
        float Tan_arr[N+1], deg, rad;
        for (i=0; i<=N; i++){
                deg = i*5.0;
                rad = tan_rad(deg);
                Tan_arr[i] = tan(rad);
                printf("Tan_arr[%d]=%f", Tan_arr[i]);
/*for loop above takes degree in step size of 5 and calls the tan_rad function*/
/*the outputs of the function are saved in the Tan_arr array*/
}
/*calculate area based on last weeks pratical*/
        float area;
        area = Tan_arr[0]+Tan_arr[N];
        for(i=1; i<N; i++){
                area = area+2.0*Tan_arr[i];
}
        float mult = tan_rad((60.0-0.0)/(2.0*N));
        area = mult*area;

        printf("area:%f\n",area);
return 0;
}

