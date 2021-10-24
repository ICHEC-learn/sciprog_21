#include<stdio.h>
#include<math.h>

//Declaration of the functions, with a name that describes what the function is doing, which is converting the angles values from degrees to radiants
//The argument is the input value, the degree value 
//The definition of the functions is displayed at the end of the program

float degtorad (float degang);
float traprule(int N, float TanArr[N+1]);

// Construction of the loop

   int main(){

   int N=12, i;
   float TanArr[N+1], deg, rad;

// Calculation of the values of the variable f(xi), where i goes from 0 to 12
// This is an array and xi is in radians 
//The main funtion is called to convert from degrees to radians, rad is the returned value

   for(i=0; i<=N; i++){
     deg=i*5.0;
     rad=degtorad(deg);
     TanArr[i]=tan(rad);
     printf("TanArr[%d]=%f (f(x) at x=%d)\n", i, TanArr[i], i);
}

// Find the area by trapezodial rule, from practical 3
// There is a multiplier (b-a)/N and a sum of f(xi)
// f(x0) correspond TanArr 0, and so on

    float area;
    area=traprule(N, TanArr);

// Approximated result

    printf("\nTrapezodial result:%f\n", area);

// Actual result (log2)

    printf("Real result: %f\n", log(2.0));

return 0;
}


// Function definition is usually reported at the end
    float degtorad(float degang){
      return((M_PI*degang)/180.0);
}

// Declaration of the second function
// This requires a further declaration, even though it was declared in main() it has to be decleared here again
    float traprule(int N, float TanArr[N+1]){
       int i;
       float area;

       area=TanArr[0]+TanArr[N];
       for(i=1; i<N; i++){
         area=area+2.0*TanArr[i];
       }

// Multiply area by (pi/3)/2N after converting it to radians
// mult_rad funcion is decleared and initialized in the same line

       float mult_rad=degtorad((60.0-0.0)/(2.0*N));
       area=mult_rad*area;

return area;
}


