#include<stdio.h>
#include<stdlib.h>

// PROBLEM

// ROD 1 = A
// ROD 2 = B
// ROD 3 = C

// n disk = 2

// Disk 1 from A to B
// Disk 2 form A      to C
// Disk 3 from      B to C

// - Shift 'n-1' disks from Source (A) to Middle (B)
// - Sfift one disk from Source (A) to Destination (C)
// - Shift 'n-1' disks from Middle(B) to Destination (C)

// These steps will keep on repeating 
// Recursive function is needed

// int n is the numbers of disks

void hanoi(int n, int source, int dest, int midd) {
   // Base case is set (n = 1)
   if (n == 1) {
   // In this case the rod is moved from the source rod (A), the first one, to the destination rod (C), the third and last one 
      printf("Moved disk %d from %d to %d\n", n, source, dest);
   }
   // In this case the rod is moved from the source rod (A), the first one, to the middle rod (B), the second one 
   else{
      hanoi(n-1, source, midd, dest);
      printf("Moved disk %d from %d to %d\n", n, source, dest);
      hanoi(n-1, midd, dest, source);
   }
}

void main () {

   int h;
   printf("Enter number of disks: \n");
   scanf("%d", &h);
   printf("Tower of Hanoi solution for %d disks:\n", h);
   // 1 is the source, 3 is the destination and 2 is the middle rod
   hanoi(h, 1, 3, 2);
}

