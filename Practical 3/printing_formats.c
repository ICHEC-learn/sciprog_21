#include<stdio.h> //header for standard input output

void main ()
{
    int i = 1; // Initializing interger varaiable
    char c = 'a'; // Initialzing character variable
    float f = 2.22; // Initializing float varaiable
    double d = 25.2132; //Initializing double variable
    char s[] = "String"; //Initializing string 
    
    printf("%d is a integer\n",i);
    printf("%c is a character\n",c);
    printf("%f is a float\n",f);
    printf("%.2f is a decimal with with 2 decimal points\n",d);
    printf("%e is a scientific notation\n",d);
    printf("'%s' is a sequence of character\n",s);
}
 /* 
 * To Run the code use below two commands
 *
 * gcc -o printing_formats printing_formats.c
 * ./printing_formats
 *
 * */
