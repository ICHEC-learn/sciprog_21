#include<stdio.h>
#include<math.h>

float degreetoradian(float degree);

int main(){

    int n=12;
    float tanArr[n+1],degree,radian;
    int i;

    /** looping from i=0 to i=12 and adding their tan values to array **/
    for(i=0;i<=n;i++){   
        degree = i*5.0;
        radian = degreetoradian(degree);
        tanArr[i] = tan(radian);
        printf("value of tan[%d] is %f\n",i,tanArr[i]);

    }

    float area;
    area = tanArr[0] + tanArr[n];

    /** looping from i=1 to i=11 and multiply with 2 and adding them to sum area **/
    for(i=1;i<n;i++){ 
        area = area + 2.0*tanArr[i];
    }

    /** calculating ((b-a)/2*N) and converting to radian **/
    float mult_rad = degreetoradian((60.0-0.0)/(2.0*n)); 
    area = area*mult_rad;

    /** printing the trapezoidal result and logf(2) result **/
    printf("Trapezoidal result is %f\n",area);
    printf("Actual result is %f\n", logf(2));


    return 0;
}

/** creating a function to convert degrees to radian **/
float degreetoradian(float degree){
    return ((M_PI*degree)/180.0);
}