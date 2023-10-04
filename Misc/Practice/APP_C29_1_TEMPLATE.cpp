/***************************************/
/* Name: First Last Date: MM/DD/YY     */
/* Code: APP C29-1                     */
/***************************************/
#include <stdio.h>
#include <math.h>

#define MAX_DATA 12000
#define EMF_K 4.0
#define ARMATURE_RA 8.0
#define INPUT_VOLTAGE 200.0
#define SAMPLING_RATE 10.0

int main()
{
	printf("***************************************\n");
	printf("* Name: First Last Date: MM/DD/YY     *\n");
	printf("* Code: APP C29-1                     *\n");
	printf("***************************************\n");
/*
	Declare variables for input and output file pointers, angular speed
	torque, time, and sum, average, max, index tracking.
	
	Initialize as needed.
*/

/* 
	Open input file for reading
*/
	
/* 
	Check to see if the file opened
*/

/*
	Tell user the file did not open and don't do anything else
*/

/*
	Else, tell the user the file opened successfuly and proceed with
	processing the file.
*/

/*
	Use while loop to read the file until the end and store all the
	speed data.  Read in data ignoring columns 1, 2, and 4.  Store
	data from column 3 in an array.  Count the number of data points.
*/

/* 
	Close the input file, but only if you opened it successfully.
*/

/*
	Use for loop to go through angular speed data and determine the max and min.  Store
	max, max index, min, min index.
*/

/* 
	Calculate the elapsed time between the max and min speeds using
	the indices.  Use fabs() to ensure time result is positive.
*/

/* 
	Compute the torque array from the speed array with the DC motorspeed equation 
*/

/* 
	Use for loop to go through torque data and determine the max and
	total so that you can use total to calculate average.
*/

/* 
	Calculate the average of the torque values
*/
	
/* 
	Calculate the max current which occurs at the max torque 
*/

/* 
	Print results to screen
*/

/* 
	Open output file for writing 
*/

/* 
	Check to see if the output file opened
*/

/* 
	Tell user the output file did not open.  Do not write to the file.
*/

/*
	Else, tell the user the file opened successfuly and proceed with
	writing to the output file.
*/

/* 
	Print results to output file 
*/

/* 
	Close output file, but only if you opened it successfully.
*/

}
