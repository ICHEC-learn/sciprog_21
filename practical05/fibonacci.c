#include<stdio.h>

int main(void){
    int n;
    printf("Please enter the number for generating fibonacci series\n");

    /** scanning the number for generating fibonacci series **/
    scanf("%d",&n); 

    if(n<1){
        printf("Please enter a valid number");
        return 0;
    }

    /** initializing the first two variables with 0 and 1 **/
    int a=0,b=1;
    printf("The fibonacci series for value n = %d\n",n);
    printf("%d, %d, ",a,b);
    int i;
    int c = 0;

    /** creating the loop to generate fibonacci series **/
    for(i=0;i<n-3;i++){
        c = a + b;
        a = b;
        b = c;
        printf("%d, ",c);
    }
    c = a+b;

    printf("%d\n",c);
    return 0;
}