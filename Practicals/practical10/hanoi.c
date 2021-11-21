#include <stdio.h>
#include <stdlib.h>

//PROBLEM

/*
Rod 1 = A
Rod 2 = B
Rod 2 = C

n disks = 2

Disk 1 from A to C
Disk 2 from A to B
Disk 1 from C to B
Disk 3 from A to C
Disk 1 from B to A
Disk 2 from B to C
Disk 1 from A to C

*/

void hanoi(int n, int source, int dest, int midd){
    if(n==1){
        printf("Moved disk %d from %d to %d\n", n, source, dest);
    }
    else{
        hanoi(n-1, source, midd, dest);
        printf("Moved disk %d from %d to %d\n", n, source, dest);
        hanoi(n-1, midd, dest, source);
    }
}

void main(){

  int h;
    printf("Enter number of disks: \n");
    scanf("%d", &h);
    printf("Tower of Hanoi solution for %d disks:\n", h);
    hanoi(h, 1,3,2);
}


