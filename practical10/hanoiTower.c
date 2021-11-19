#include<stdio.h>

/** 
Rod 1 = A
Rod 2 = B
Rod 3 = C
ndisks = 2
disk 1 from A to B
disk 2 from A to C
disk 1 from B to C
Shift 'n-1' disks from source(A) to middle(B)
Shift one disk from source(A) to C(destination)
Shift 'n-1' disks from middle(B) to C(destination) **/

/** Declaring the function hanoi **/
void hanoi(int n, int source, int dest, int midValue);

int main(void){
    int n;
    printf("Enter number of disks :\n");
    /** Taking the number of discs input from the user **/
    scanf("%d", &n);
    printf("Tower of Hanoi solution for %d disks is : \n", n);
    hanoi(n,1,3,2);
}

/** Implementing the function hanoi **/
void hanoi(int n, int source, int dest, int midValue){
    if(n==1)
        printf("Moved disk %d from %d to %d\n", n, source, dest);
    else{
        hanoi(n-1,source,midValue,dest);
        printf("Moved disk %d from %d to %d\n", n, source,dest);
        hanoi(n-1,midValue,dest,source);
    }
}