#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

/* Define an expression to retrieve time since the beginning of the big loop */
#define TIME (int)time(NULL)-start_time

int main()
{
	/* Declare and initialize stoplight variables:
		State and next state
		Time for green light, yellow light, total run time, and start time
		Character array for printing stoplight update
		Keeping track of when the light starts a new state and for how long that state
		should last (wait) */
    int state=0, next_state=0;
    int green_time=8, yellow_time=2, total_time=90, start_time;
    char update[50];
    int light_start=0, light_wait=0;
    
    /* Declare and initialize bus variables:
    	Boolean for whether the bus has arrived or not
    	Period of time between bus arrivals and time for one passenger to get on the bus
    	Randomized number of passengers, and min and max possible numbers of passengers
    	Seed the random number generator for time
    	Keeping track of when the bus arrives (starts) and for how long picking up the
    	passengers will take (how long it will wait based just on the passengers) */
    bool bus_arrived=0;
    int bus_period=24, bus_t=1;
    int bus_n, bus_n_min=0, bus_n_max=10;
    int bus_start=0, bus_wait=0;
    srand(_____);
    
    /* Determine the start time of the simulation for timing reference */
    start_time = _____;
    
    /* Run the simulation as long as the total time has not elapsed */
    while (_____<=total_time)
    {
    	/* Check if the wait time for the current stoplight state has elapsed or if
    		it is the first time through this loop */
    	if ((int) time(NULL)-_____==_____ || light_start==0)
    	{
    		/* Update state with the previously defined next state */
			state = next_state;
			/* Switch the stoplight state */
			switch (state)
			{
			case 0:
				/* Update stoplight wait for green N/S light and set next state */
				strcpy(update, "N/S: Green\tE/W: Red");
				light_wait = _____;
				next_state = _____;
				break;
			case 1:
				/* Update stoplight wait for yellow N/S light and set next state */
				strcpy(update, _____);
				light_wait = _____;
				next_state = _____;
				break;
			case 2:
				/* Update stoplight wait for green E/W light and set next state */
				strcpy(update, "N/S: Red\tE/W: Green");
				light_wait = _____;
				next_state = _____;
				break;
			case 3:
				/* Update stoplight wait for yellow E/W light and set next state */
				strcpy(update, _____);
				light_wait = _____;
				next_state = _____;
				break;
			}
			/* Set start time of current stoplight state */
			_____ = (int) time(NULL);
			/* Print stoplight update to screen with timestamp */
			printf("%d s\t%s\n", _____, _____);
		}
		
		/* Check if the current time is a bus arrival period time */
		if ((TIME)%_____==_____)
    	{
    		/* Display that the bus arrived with timestamp */
    		printf("%d s\tThe bus arrived.\n", _____);
    		/* Set boolean for bus arrival to 1 */
    		bus_arrived = 1;
    		/* Randomly generate number of passengers to get on the bus within
    			the range of the min and max possible numbers */
			bus_n = rand()%(_____-_____+1)+_____;
			/* Set start time of current bus arrival */
			bus_start = _____;
			/* Determine amount of time to wait for the bus to pick up passengers */
			bus_wait = _____*_____;
    	}
    	
    	/* Check if the wait time for picking up passengers has exactly elapsed */
    	if (TIME-_____==_____ && bus_arrived)
    	{
    		/* Display how many passengers the bus picked up with timestamp */
			printf("%d s\tThe bus picked up %d passenger(s).\n", _____, _____);
    	}
    
    	/* Check if the wait time for picking up passengers has elapsed and if the
    		light is green so the bus can depart */
        if (TIME-_____>=_____ && bus_arrived)
    	{
    		/* Check if the stoplight state is N/S green */
    		if (state==_____)
    		{
    			/* Display that the bus departed with timestamp */
    			printf("%d s\tThe bus departed.\n", _____);
    			/* State boolean for bus arrival to 0 */
    			bus_arrived = 0;
    		}
    	}
    	/* Wait for the smallest amount of time among all actions */
		sleep(bus_t);
    }
    /* End */
    printf("\n\n");
}

