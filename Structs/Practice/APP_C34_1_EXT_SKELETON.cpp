#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/* Define song struct with data members for title and artist, and pointers
	to left and right child nodes for binary search tree */
struct song
{
	char title[25];
	char artist[25];
	struct song* left;
	struct song* right;
};

/* Declare global pointers for new node, current node, and root node for
	binary search tree */
struct song *node, *current, *root = NULL;

/* Allocate global memory for a stack data structure which will store pointers
	to nodes of the songs tree; Since the stack pointer points to pointers,
	it is a pointer to a pointer, hence the double asterisk */
struct song **stack_ptr = (struct song **) calloc(20,sizeof(struct song));
struct song **stack_bot = stack_ptr, **stack_top = stack_ptr+19;

/* Function prototypes for stack data structure*/
void push(struct song *s);
void pop(struct song **s);

/* Function prototypes for binary search tree data structure */
void display_forward();
void display_backward();
void insert_node(struct song *node);

int main()
{
    /* Declare and initialize variables for total number of songs in input file,
    	counter for number of songs read in, and user-selected control choice */
    int N, n=0, choice=0;
    
    /* Declare input file pointer and open input file for reading */
    FILE *fptr;
    fptr = fopen("APP_C34_1_EXT_songs.txt","r");
    
    /* Read in total number of songs in input file */
    fscanf(fptr, "%d", &N);
    
    /* Read in songs from input file to create initial binary search tree until all
    	songs are stored */
    while (n<N)
    {
    	/* Allocate memory for the new node */
    	node = (struct song *) malloc(sizeof(struct song));
    	
    	/* Read in the song's title and artist into the new node */
    	fscanf(fptr, "%s%s", _____, _____);
    	
    	/* Insert new song node into binary search tree */
    	insert_node(_____);
    
    	/* Increment the number of songs read in from the input file */
    	n++;
    }
    
    /* Close input file pointer */
    fclose(fptr);
    
    /* Execute user choices until the user quits */
    while (choice!=4)
    {
    	/* Display input options */
    	printf("\n");
    	printf("\n1\tDisplay songs in ascending title order");
    	printf("\n2\tDisplay songs in descending title order");
    	printf("\n3\tAdd new song");
    	printf("\n4\tQuit program");
    	printf("\nEnter your choice: ");
    	
    	/* Read in user input choice */
    	scanf("%d",&choice);
    	
    	/* Determine which option the user chose */
    	switch (choice)
    	{
    		case 1:
    			/* Display all song nodes in forward alphabetical order */
				display_forward();
    			break;
    		case 2:
    			/* Display all song nodes in backward alphabetical order */
    			display_backward();
    			break;
    		case 3:
    			/* Allocate memory for new song node */
    			node = (struct song *) malloc(sizeof(struct song));

				/* Prompt user to enter new song title */
				printf("\nEnter new song title: ");
    			scanf("%s", _____);
    
    			/* Prompt user to enter new song artist */
   				printf("Enter new song artist: ");
    			scanf("%s", _____);
    			
    			/* Insert new song node into binary search tree */
    			insert_node(_____);
    			break;
    		case 4:
    			/* Do nothing so the loop can be exited */
    			break;
    		default:
    			/* Display error message for invalid choice */
    			printf("\nInvalid entry");
    			break;
    	}
    }
    
    /* End */
    printf("\n\n");
}

/* Push function to add a parent pointer to the top of the stack */
void push(struct song *s)
{
	/* Check if the top of the stack has not been reached */
	if (stack_ptr < stack_top-1)
	{
		/* Increment stack pointer and insert song pointer into new spot */
		*(++stack_ptr) = s;
	}
}

/* Pop function to retrieve a parent pointer from the top of the stack */
void pop(struct song **s)
{
	/* Check if the bottom of the stack has not been reached */
	if (stack_ptr > stack_bot)
	{
		/* Retrieve previous parent pointer from stack and decrement stack pointer */
		*s = *(stack_ptr--);
	}
}

/* Display all songs nodes in forward alphabetical title order */
void display_forward()
{
	/* Clear the terminal window for ease of viewing */
	system("clear");

	/* Start the current node at the root node */
	current = _____
	
	/* Display the headers for the parameters */
	printf("\n%-27s%-27s","Title","Artist");
	printf("%-11s%-11s%-11s","This Node","Left Child","Right Child");
	
	/* Traverse through the tree to display songs UNTIL both the current node
		is NULL (a leaf has been reached) AND the stack is empty (the stack pointer
		points to the bottom of the stack)
		Note that this logic is the same as traversing through the tree WHILE the
		current node is NOT NULL OR the stack pointer is NOT at the bottom */
	while (current != NULL || stack_ptr != stack_bot)
	{
		/* Traverse down the left edges until there are no more left child nodes */
		while (current != NULL)
		{
			/* Push the current node to the stack since it might be a parent node */
			push(current);
			/* Move to the current node's left child node since lower titles
				should be displayed first */
			current = _____
		}
		
		/* Pop the most recent node off the stack into the current node */
		pop(&current);
		
		/* Display current song title and artist */
		printf("\n%-27s%-27s", _____, _____);
		
		/* Display current song node address and left and right child pointers */
		printf("%-11p%-11p%-11p", _____, _____, _____);
		
		/* Move to the right child node since those nodes should be displayed before
			the next parent node is retrieved */
		current = _____
	}
}

/* Display all songs nodes in backward alphabetical title order */
void display_backward()
{
	/* This function will be very similar to the above function for displaying
		all the nodes in forward alphabetical order, but there will be two small
		changes you have to make to display in backward alphabetical order. */
}

/* Insert new song node into binary search tree */
void insert_node(struct song *node)
{
	/* Set the new node's left and right child pointers to NULL */
    _____ = _____
    _____ = _____
    
    /* Set the current node to the root node */
	current = _____
	
	/* Declare and initialize variable to keep track of when the node is inserted */
	int insert = 0;
	
	/* Traverse the tree until the new node is inserted */
	while (insert == 0)
	{
		/* Check if the root node has not been set yet, which means there are no nodes
			already in the tree */
		if (root == NULL)
		{
			/* Set the root node to the new node */
			root = _____
			/* Set the insert variable */
			insert = 1;
		}
		/* Else the tree has been started and the new node must be inserted */
		else
		{
			/* Check if the new node title goes before the current node */
			if (strcmp(_____,_____)<0)
			{
				/* Check if the current node does not already have a left child */
				if (current->left == NULL)
				{
					/* Set the current node left child as the new node */
					_____ = _____
					/* Set the insert variable */
					insert = 1;
				}
				/* Else the current node already has a left child, and move to the
					next child */
				else
				{
					/* Set the current node to the current node's left child */
					current = _____
				}
			}
			/* Check if the new node title goes after the current node */
			else if (strcmp(_____,_____)>0)
			{
				/* Check if the current node does not already have a right child */
				if (current->right == NULL)
				{
					/* Set the current node right child as the new node */
					_____ = _____
					/* Set the insert variable */
					insert = 1;
				}
				/* Else the current node already has a right child, and move to the
					next child */
				else
				{
					/* Set the current node to the current node's right child */
					current = _____
				}
			}
		}
	}
}

