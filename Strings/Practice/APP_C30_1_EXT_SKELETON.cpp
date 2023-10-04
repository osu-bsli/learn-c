#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define DAYS 14
#define MAX 10

int main()
{   
	/* Declare variable to store number of characters in each line */
    int c;
    /* Declare loop counter variables */
    int i, j, k;
    /* Declare index variables for accessing characters in 2D character pointer */
    /* (m is kind of like the row index, and n is kind of like the column index) */
    int m, n;
    /* Declare variable to keep track of whether a token is unique or not */
    int u;
    
    /* Allocate and initialize smallest needed memory for character line pointer
     * and tokens pointer */
    /* The character line pointer will hold the characters from the line in the input
     * file, including all tokens and delimiters in the one line. We will resuse this
     * same character line pointer every time we look at a new line in the file. */
    /* The tokens pointer will hold just the unique tokens from the input file, and it
     * will be resized every time a new unique token is found. */
    char *ptr = (char *) calloc(1, sizeof(char));
    char *tokens = (char *) calloc(1*MAX, sizeof(char));
    
    /* Declare input file pointer */
    FILE *fptr;
    /* Open input file for reading */
    fptr = fopen("APP_C30_1_EXT_chemicals.txt", "r");
    
    /* Set tokens pointer indices to zero */
    m = 0;
    n = 0;
    /* Step through all days lines in input file */
    for (k=0;k<DAYS;k++)
    {
    	/* Read integer number of characters in each line */
    	fscanf(_____,_____,_____);
    	/* Reallocate memory for character line pointer based on number of characters */
    	/* Note: Make sure to include space for the null character. */
    	ptr = (char *) realloc(ptr,(c+1)*sizeof(char));
    	/* Read rest of line of characters as a single string into the pointer */
    	/* Note: Scanning a string will automatically put a null character at the end. */
    	fscanf(_____,_____,_____);
    	
    	/* Step through each character of the scanned line string */
    	/* Note: The variable c does NOT include the null character, but we must
    	 * include the null character since fscanf() added a null character */
    	for (i=0;i<_____;i++)
    	{
    		/* Check if the selected character is a delimiter or null */
    		if (*(ptr+_____)==_____   ||   _____)
    		{
    			/* Set the current character of the token to be null since it is
    			 * the last character in the token */
    			*(tokens+_____*MAX+_____) = '\0';
    			/* Reset the character column index */
    			n = 0;
    			
    			/* Set unique variable to assume token is unique */
    			u = 0;
    			/* Step through each token already saved */
    			/* Note: Do not check j=m because it will check and overwrite itself. */
    			for (j=0;j<m;j++)
    			{
    				/* Compare the new token with all saved tokens */
    				if (strcmp(tokens+_____,tokens+_____)==_____)
    				{
    					/* If new token matches a previous one, then set u and break */
    					u = 1;
    					break;
    				}
    			}
    			
    			/* Check if the new token is unique */
    			if (u==0)
    			{
    				/* Increment the row index to go to next token */
    				m = m+1;
    				/* Reallocate memory for tokens pointer to add one more spot for
    				 * next potential unique token */
    				/* Note: Although we just incremented the value of m to 
    				 * go to the next token, we must reallocate for m+1 sets of tokens
    				 * because m started at 0 while the tokens pointer was initially
    				 * allocated for 1 set of tokens. */
    				tokens = _____
    			}
    			/* Else if the token is not unique */
    			else
    			{
    				/* Overwrite the current token to be empty and do NOT increment
    				 * the row index so that the next pass through uses the same row
    				 * index until a unique token is found */
    				strcpy(tokens+_____,"");
    			}
    		}
    		/* Else the selected character is part of the token */
    		else
    		{
    			/* Store the selected character into the proper place with the tokens
    			 * pointer */
    			/* Note: m is like the row (token) and n is like the column (character) */
    			*(tokens+_____+_____) = *(ptr+_____);
    			/* Increment column (character) index to go to next spot */
    			n = n+1;
    		}
    	}
    }
    /* Close input file pointer */
    fclose(fptr);
    
    /* Step through all unique tokens and print to screen */
    for (i=0;i<=m-1;i++)
    {
    	printf(_____,tokens+_____);
    }
    
    /* Free allocated memory for character line pointer and tokens pointer */
    free(ptr);
    free(tokens);
    
    /* End */
    printf("\n\n");
}

