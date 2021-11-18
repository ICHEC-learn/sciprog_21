#include<stdio.h> 

int main (void)
{
    /** Initializing the variables for integer, character, float, double and string **/
    int n = 4; 
    char c = 'c'; 
    float f = 3.86; 
    double d = 26.4545; 
    char s[] = "Scientific programming";  
    
    printf("Integer : %d\n",n);
    printf("Char : %c\n",c);
    printf("Float : %f\n",f);
    printf("Double : %lf\n",d);
    printf("String : %s\n",s);

    return 0;
}