#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/* Define movie struct wth data members for title, year, and director, and
	pointers to previous and next structs for linked list */
struct movie
{
	char title[20];
	int year;
	char director[15];
	struct movie* prev;
	struct movie* next;
};

/* Declare global pointers for new node, current node, previous node, head
	node, and tail node of linked list */
struct movie *node, *current, *previous, *head = NULL, *tail = NULL;

/* Function prototypes */
void display_forward();
void display_backward();
void insert_node();

int main()
{
    /* Declare and initialize variables for total number of movies in input file,
    	counter for number of movies read in, and user-selected control choice */
    int N, n=0, choice=0;
    
    /* Declare input file pointer and open input file for reading */
    FILE *fptr;
    fptr = fopen("APP_C33_1_EXT_movies.txt","r");
    
    /* Read in total number of movies in input file */
    fscanf(fptr, "%d", &N);
    
    /* Read in movies from input file to create initial linked list until all
    	movies are stored */
    while (n<N)
    {
    	/* Check if the head node has not been set yet, which means the first
    		movie has not been read in yet */
    	if (head == NULL)
    	{
    		/* Allocate memory for the head node */
    		head = (struct movie *) malloc(sizeof(struct movie));
    		/* Read in the movie's title, year, and director into the head node */
    		fscanf(fptr, "%s%d%s", _____, _____, _____);
    		/* Set the head node prev pointer to NULL by definition */
    		head->prev = _____;
    		/* Since this is the first node, it is also the tail node for now */
    		tail = _____;
    		/* Set the tail node next pointer to NULL by definition */
    		head->next = _____;
    		/* Set this node as the previous node to be added */
    		previous = _____;
    	}
    	/* Else the linked list has been started and a new node must be created */
    	else
    	{
    		/* Allocate memory for the new node */
    		node = (struct movie *) malloc(sizeof(struct movie));
    		/* Read in the movie's title, year, and director into the new node */
    		fscanf(fptr, "%s%d%s", _____, _____, _____);
    		/* Set prev pointer to previous node */
    		node->prev = _____;
    		/* Set this node as the new tail node */
    		tail = _____;
    		/* Set the tail node next pointer to NULL by definition */
    		node->next = _____;
    		/* Change the previous node's next pointer to this new node */
    		previous->next = _____;
    		/* Set this new node as the new previous node to be added */
    		previous = _____;
    	}
    	
    	/* Increment the number of movies read in from the input file */
    	n++;
    }
    
    /* Close input file pointer */
    fclose(fptr);
    
    /* Execute user choices until the user quits */
    while (choice!=4)
    {
    	/* Display input options */
    	printf("\n");
    	printf("\n1\tDisplay movies in forward alphabetical order");
    	printf("\n2\tDisplay movies in backward alphabetical order");
    	printf("\n3\tAdd new movie");
    	printf("\n4\tQuit program");
    	printf("\nEnter your choice: ");
    	
    	/* Read in user input choice */
    	scanf("%d",&choice);
    	
    	/* Determine which option the user chose */
    	switch (choice)
    	{
    		case 1:
    			/* Display all movie nodes in forward alphabetical order */
				display_forward();
    			break;
    		case 2:
    			/* Display all movie nodes in backward alphabetical order */
    			display_backward();
    			break;
    		case 3:
    			/* Allow user to insert a new movie node */
    			insert_node();
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

/* Display all movie nodes in forward alphabetical order */
void display_forward()
{
	/* Clear the terminal window for ease of viewing */
	system("clear");

	/* Start the current node at the head node to display forwards */
	current = _____
	
	/* Display the headers for the parameters */
	printf("\n%-22s%-6s%-17s","Title","Year","Director");
	printf("%-11s%-11s%-11s","This Node","Prev Node","Next Node");
    
    /* Display movies until the next current node is NULL (the tail has been reached) */
	while (current != NULL)
    {
    	/* Display current movie title, year, and director */
    	printf("\n%-22s%-6d%-17s", _____, _____, _____);
    	
    	/* Display current movie node address, previous pointer, and next pointer */
    	printf("%-11p%-11p%-11p", _____, _____, _____);
    	
    	/* Move along the linked list by setting current movie node to next pointer */
    	current = _____
   	}
}

/* Display all movie nodes in backward alphabetical order */
void display_backward()
{
	/* This function will be very similar to the above function for displaying in
	 * forward order, but there are two small changes you have to make to make it
	 * display in backward order. */
}

/* Allow user to insert new movie node into linked list */
void insert_node()
{
	/* Allocate memory for new movie node */
	node = (struct movie *) malloc(sizeof(struct movie));

	/* Prompt user to enter new movie title */
	printf("\nEnter new movie title: ");
    scanf("%s", _____);
    
    /* Prompt user to enter new movie year */
   	printf("Enter new movie year: ");
    scanf("%d", _____);
    
    /* Prompt user to enter new movie director */
    printf("Enter new movie director: ");
    scanf("%s", _____);
    
    /* Declare and initialize variable to keep track of when the node is inserted */
    int insert = 0;
    
    /* Set the current node at the head node */
    current = _____;
    
    /* Go through each node in order until the new node is inserted */
    while (insert == 0)
    {
    	/* Check if the head node has not been set yet, which means there are no
    		nodes already in the linked list */
    	if (head == NULL)
    	{
    		/* Set the head node to the new allocated node */
    		head = _____
    		/* Set the head node prev pointer to NULL by definition */
    		head->prev = _____
    		/* Since this is the first node, it is also the tail node for now */
    		tail = _____
    		/* Set the tail node next pointer to NULL by definition */
    		head->next = _____
    		/* Set the insert variable */
    		insert = 1;
    	}
    	/* Else the linked list has been started and the new node must be inserted */
    	else
    	{
    		/* Check if the new node should go before the head node */
    		if (strcmp(node->title,head->title)<0)
    		{
    			/* Set the new node's prev and next pointers */
    			node->prev = _____
    			node->next = _____
    			
    			/* Change (or keep) the head's prev and next pointers */
    			head->prev = _____
    			head->next = _____
    			
    			/* Set the new head to the new node */
    			head = _____
    			
    			/* Set the insert variable */
    			insert  = 1;
    		}
    		/* Check if the new node should go after the tail node */
    		else if (strcmp(node->title,tail->title)>0)
    		{
    			/* Set the new node's prev and next pointers */
    			node->prev = _____
    			node->next = _____
    			
    			/* Change (or keep) the tail's prev and next pointers */
    			tail->prev = _____
    			tail->next = _____
    			
    			/* Set the new tail to the new node */
    			tail = _____
    			
    			/* Set the insert variable */
    			insert = 1;
    		}
    		/* Check if the new node should go before the current node */
    		else if (strcmp(node->title,current->title)<0)
    		{
    			/* Set the new node's prev and next pointers */
    			node->prev = _____
    			node->next = _____
    			
    			/* Change (or keep) the current node's prev and next pointers */
    			current->prev = _____
    			current->next = _____
    			
    			/* Change (or keep) the prev and next pointers of the node which
    				used to be before the current node (and will now be before the
    				new node) */
    			node->prev->prev = _____
    			node->prev->next = _____
    			
    			/* Set the insert variable */
    			insert = 1;
    		}
    		/* Else if the new node should not go before the current node,
    			move along the linked list by setting current node to next pointer */
    		else
    		{
    			current = _____
    		}
    	}
    }
}

