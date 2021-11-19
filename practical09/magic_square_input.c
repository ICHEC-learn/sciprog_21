#include<stdio.h>
#include<stdlib.h>
#include "magic_square.h"

/** defining the maximum length of file name **/
#define MAX_FILE_NAME 100

/** Declaring function getLines **/
int getlines(char file[MAX_FILE_NAME]);

int main(void){
    int n;
    FILE *fp;
    char file[MAX_FILE_NAME];
    printf("Enter the file name to be read:\n");
    scanf("%s", file);

    /** fetching the count of lines **/
    n = getlines(file);
    fp = fopen(file, "r");
    int **magic_square =(int**)malloc(n * sizeof(int*));

    int i;
    for(i=0; i<n ; i++){
        magic_square[i] = malloc(n * sizeof(int));
    }

    int j;
    /** Fetching input from the file **/
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            fscanf(fp,"%d", &magic_square[i][j]);
        }
    }

    /** checking whether the sqaure matrix is magic or not **/
    printf("The square %s magic\n", isMagicSquare(magic_square,n)? "is": "is NOT");

    
    /** Deallocating the matrix **/
    for(i=0;i<n;i++){
        free(magic_square[i]);
    }
        
    free(magic_square);
    fclose(fp);
    return 0;
}

/** Implementing the function getlines **/
/** It will return the count of lines in file **/
int getlines(char file[MAX_FILE_NAME]){
    FILE *fp;
    int ch_read;
    int c = 0;
    fp = fopen(file, "r");

    /** looping till we reach the EOF **/
    while((ch_read = fgetc(fp)) != EOF){
        if(ch_read == '\n'){
            c = c + 1;
        }
    }
    printf("count of number of lines in file %d\n", c);
    fclose(fp);
    return c;
}