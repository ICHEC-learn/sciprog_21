#include <stdio.h>
#include <math.h>

int main(void){

        int n;
        printf("Please enter integer value for (n):\n");
        scanf("%d", &n);
        printf("You entered %d\n", n);

        if(n % 2 == 0){
                int f = n/2;
                printf("%d",f);
        }
        else{
                int f = (3*n)+1;
                printf("%d", f);
        }
}
