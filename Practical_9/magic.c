#include <stdio.h>
#include <stdlib.h>
#include "magic_square.h"
#define  MAX_FILE_NAME 100

/*include fill with name string up to 100*/

/*declare function*/
int getlines(char filename[MAX_FILE_NAME]);
int main(){

        /*hand the file using pointer f*/
        /*scanf in file name from user*/
        FILE *f;
        char filename[MAX_FILE_NAME];
        printf("Enter file name:");
        scanf("%s", filename);

        /*open file*/
        f = fopen(filename, "r");
        /*set n as getlines function called for file*/
        int n = getlines(filename);

	int i;
        /*take matrix, allocate memory needed fro matrix*/
        int ** magicSquare = malloc(n * sizeof(int*));

        for(i=0; i<n; i++){
                magicSquare[i] = malloc(n*sizeof(int));
        }
        int j;

        /*scan in the matrix*/
        for(i=0; i<n; i++){
                for(j=0; j<n; j++){
                        scanf(f, "%d", &magicSquare[i][j]);
                }
        }
        /*print out resulys of magicSquare*/
        printf("The square %s magic.\n", isMagicSquare(magicSquare, n)? "is" : "is NOT");

        /*free memory no longer needed*/
        for(i=0; i<n; i++){
		free(magicSquare[i]);
        }
        free(magicSquare);

        /*close file*/
        fclose(f);
        return 0;
}

/*create getlines function*/
int getlines(char filename[MAX_FILE_NAME]){
        FILE *fp;
        fp = fopen(filename, "r");
        int ch_read;
        int count = 0;
        /*get next character from fp*/
        while((ch_read = fgetc(fp)) != EOF){
                /*when new line is encountered increment count*/
                if(ch_read == '\n'){
                        count++;
                }
        }
	/*print count which is number of lines*/
        printf("Number if lines:%d\n", count);
        fclose(fp);
        return count;
}
               
