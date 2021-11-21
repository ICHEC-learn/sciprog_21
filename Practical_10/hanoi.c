#include <stdio.h>

/*create recursive function*/
void hanoi(int n, int source, int dest, int midd){
        if (n==1){
                printf("Moved disk %d from %d to %d\n", n, source, dest);
        }
        else{
                /*recursive hanoi function, print move*/
                hanoi(n-1, source, midd, dest);
                printf("Moved disk %d from %d to %d\n", n, source, dest);
                hanoi(n-1, midd, dest, source);
        }
}

void main(){

        /*take user inouts for numbers of disks*/
        /*statement to print results,and call function*/
        int h;
        printf("Enter number of disks;\n");
        scanf("%d", &h);
        printf("Tower solution for %d disks:\n", h);
	hanoi(h, 1, 3, 2);
}

