#include <stdio.h>
#include <stdlib.h>
#define MAX_FILE_NAME 100
#include "magic_square.h"

int getlines(char filename[MAX_FILE_NAME]);

int main(){
    /*
    int n;
    printf("Enter the squares side:\n");
    scanf("%d", &n);
    */
    FILE *f ;// files
    char filename[MAX_FILE_NAME]; // files
    printf("Enter the name of the file you wish to read: "); // files
    scanf("%s", filename); // files

    // !!!!!!! DO NOT FORGET
    f = fopen(filename, "r");


    int n = getlines(filename); // files

    // Allocate a matrix

    int i;
    int ** magicSquare = malloc(n * sizeof(int*));

    for(i = 0; i < n; i++){
        magicSquare[i] = malloc(n * sizeof(int));
    }

    int j;
    for(i=0; i<n; i++){
        //printf("Enter the elements in row #%d, separated by blank and/or linebreaks: \n", i+1);
        for(j=0; j<n; j++){
            fscanf(f, "%d", &magicSquare[i][j]);
        }
    }

    printf("The square %s magic. \n", isMagicSquare(magicSquare, n)? "is": "is NOT");
    for(i=0; i<n; i++){
        free(magicSquare[i]);
    }
    free(magicSquare);

    fclose(f); // files 

    return 0;
}

int getlines(char filename[MAX_FILE_NAME]){

    FILE *fp;
    fp = fopen(filename, "r");

    int ch_read;
    int count = 0;
    while( (ch_read = fgetc(fp)) != EOF){
        if(ch_read == '\n'){
            count++;
        }
    }
    printf("No. of lines %d\n", count);
    fclose(fp);
    return count;
}