#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/* Define size (number of data elements) of stack */
#define SIZE 10

/* Allocate global memory for the stack of size SIZE and a top and bottom
	with the stack pointer, and initialize all data elements to 0 */
int *stack_ptr = (int *) calloc(SIZE+2,sizeof(int));
int *stack_bot = stack_ptr, *stack_top = stack_ptr+SIZE+1;

/* Include function prototypes */
void store(int *);
void push(int *);
void pop(int *);
void show(int *, int *);

int main()
{   
    /* Declare pointer to a function of return type void with pointer input */
    void (*func)(int *);
    
    /* Allocate and initialize memory for two registers (R1 and R2) */
	int *R1 = (int *) calloc(1,sizeof(int)), *R2 = (int *) calloc(1,sizeof(int));
    
    /* Allocate and initialize memory for user input string */
	char *input = (char *) calloc(10,sizeof(char));
    
    /* Allow user to push, pop, and show the stack until the user quits */
    while (strcmp(input,"end")!=0)
    {
    	/* Call the show function to update the stack, stack pointer, and registers */
    	_____
    
    	/* Prompt user to enter command and read input string */
		printf("\n\nEnter command: ");
		scanf("%s",input);

		/* Check if a valid first instruction was input */
		if (_____ || _____ || _____)
		{
			/* Check if instruction is store */
			if (_____)
			{
				/* Assign function pointer to be store */
				_____;
			}
			/* Check if instruction is push */
			else if (_____)
			{
				/* Assign function pointer to be push */
				_____;
			}
			/* Check if instruction is pop */
			else if (_____)
			{
				/* Assign function pointer to be pop */
				_____;
			}
			
			/* Check if user entered more text for the register */
			if (scanf("%s",input)==1)
			{
				/* Check if register is R1 */
				if (_____)
				{
					/* Call specified function with register R1 */
					_____
				}
				/* Check if register is R2 */
				else if (_____)
				{
					/* Call specified function with register R2 */
					_____
				}
			}
		}
    }
    
    /* End */
    printf("\n");
}

/* Store function to read user integer input and save to register */
void store(int *R)
{

}

/* Push function to add an element to the top of the stack */
void push(int *R)
{

}

/* Pop function to remove an element from the top of the stack */
void pop(int *R)
{

}

/* Show function to display the stack in order */
void show(int *R1, int *R2)
{
	/* Declare loop counter variable */
	int i;
	
	/* Clear the terminal window */
	system("clear");
	
	/* Label stack and registers */
	printf("Stack:\t\t\t\tRegisters:\n");
	
	/* Go through each stack element and print information to screen */
	for (i=SIZE+1; i>=0; i--)
	{
		/* Print address of ith stack element */
		printf("\n%p:", _____);
		
		/* Check if the ith stack element is at the top of the stack */
		if ((_____)==stack_top)
		{
			/* Label stack top */
			printf("\tTOP");
			/* Print current register values in same line */
			printf("\t\tR1: %d\tR2: %d", _____, _____);
		}
		/* Check if the ith stack element is at the bottom of the stack */
		else if ((_____)==stack_bot)
		{
			/* Label stack bottom */
			printf("\tBOT");
		}
		/* Else, the ith stack element is a data element */
		else
		{
			/* Print data element value */
			printf("\t%d", _____);
		}
		
		/* Check if the ith stack element is at the stack pointer location */
		if ((_____)==stack_ptr)
		{
			/* Indicate stack pointer location */
			printf("\t<-SP");
		}
	}
}

