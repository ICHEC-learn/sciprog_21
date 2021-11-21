#include <stdio.h>
#include <stdlib.h>
#define MAX_FILE_NAME 100
#include "magic_square.h"

int getlines(char filename[MAX_FILE_NAME]){
    FILE *fp;
    fp = fopen(filename, "r");

    int ch_read;
    int count = 1; // I need to set this equal to 1 whereas in the practical he sets it to 0??

    while( (ch_read = fgetc(fp)) != EOF){
        if(ch_read == '\n'){
            count += 1;
        }
    }

    printf("No. of lines %d\n", count);
    fclose(fp);
    return count;
}


int main(){

    //int n;
    //printf("Enter the size of the square:\n");
    //scanf("%d", &n);

    FILE *f;
    char filename[MAX_FILE_NAME];
    printf("Enter the name of the file: ");
    scanf("%s", filename);

    // !!! Do NOT FORGET

    f = fopen(filename, "r");

    int n =getlines(filename);


    // Allocate a matrix
    int i;
    int ** magicSquare = malloc(n * sizeof(int*));

    for(i=0; i<n ; i++){
        magicSquare[i] = malloc(n * sizeof(int));
    }

    int j;

    for(i=0; i<n; i++){
        //printf("Enter the elements in row #%d, separated by blanks and/or linebreaks:\n", i+1);
        for(j=0; j<n; j++){
            fscanf(f, "%d", &magicSquare[i][j]);
        }
    }

    printf("The square %s magic. \n", isMagicSquare(magicSquare, n) ? "is": "is not");

    for(i=0; i<n ; i++){
        free(magicSquare[i]);
    }
    free(magicSquare);

    fclose(f); // 

    return 0;
}