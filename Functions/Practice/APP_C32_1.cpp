#include <stdio.h>
#include <stdlib.h>

// Number of data points to be processed.
#define NUM_DATA_POINTS 120

// Function prototype for C2F.
// C2F() expects the address of a float, the address of a float, and an integer
// C2F() does not return a value
void C2F(float *, float *, int);

// Function prototype for AverageTemp
// AverageTemp() expects the address of a float and an integer
// AverageTemp() returns a float
float AverageTemp(float *, int);

// Function prototype for MaxMin
// MaxMin() expects the address of a float, an integer, the address of a float, and
// the address of a float
// MaxMin() does not return a value
void MaxMin(*** CODE ***);

int main()
{
// Declare variables that main() needs
	FILE *fp1;									// For referencing the data file
	float celsius[NUM_DATA_POINTS];		// For storing celsius data from the file
	float fahrenheit[NUM_DATA_POINTS];	// For storing Fahrenheit data that was converted from Celsius
	float average_c;							// For storing the average Celsius temperature
	float average_f;							// For storing the average Fahrenheit temperature
	float max_c, min_c, max_f, min_f;	// For storing the max/min Celsius and Fahrenheit temperatures
	int i;										// For counting in the loop.
	
// Open data file	
	fp1 = fopen("APP_C32_1_temperature.dat", "r");

// Verify successful opening.  If not, print message and do nothing else.	
	if (fp1 == NULL)
	{
		printf ("Data file didn't open\n");		
	}
	else
	{
	
// Upon successful file open, read all the data into celsius array.	
		for (i = 0; i < NUM_DATA_POINTS; i++)
		{
			fscanf(*** CODE ***);
		}	
		
// Call C2F().  Pass it the address of the celsius array which is used to send temperatures
// INTO the C2F() function, the address of the Fahrenheit array which will hold the converted temperatures
// being passed OUT OF C2F() when it is done, and the number of data points.

		C2F(*** CODE ***, NUM_DATA_POINTS);

// Call AverageTemp().  Pass it the address of the CELSIUS array which is used to send temperatures
// INTO the AverageTemp() function and the number of data points.  The average temperature will be calculated
// inside of AverageTemp() and RETURNED at the end of the function.  The returned value will be assigned
// to average_c.
//
// Print	the average Celsius temperature.

		average_c = AverageTemp(*** CODE ***, NUM_DATA_POINTS);
		printf ("average C = %4.1f degrees Celsius\n", average_c);

// Call AverageTemp().  Pass it the address of the FAHRENHEIT array which is used to send temperatures
// INTO AverageTemp() and the number of data points.  The average temperature will be calculated
// inside of AverageTemp() and RETURNED at the end of the function.  The returned value will be assigned
// to average_f.
//
// Print	the average Fahrenheit temperature.
		
		average_f = AverageTemp(*** CODE ***, NUM_DATA_POINTS);
		printf ("average F = %4.1f degrees Fahrenheit\n", average_f);

// Call MaxMin().  Pass it the address of the CELSIUS array which is used to send temperatures 
// INTO MaxMin() and the number of data points.  Also, pass the address of max_c and min_c which will
// hold the max and min Celsius temperatures being passed OUT OF MaxMin.
//
// Print the max and min Celsius temperatures.

		MaxMin(*** CODE ***);
		printf ("max C = %4.1f degrees Celsius\n", max_c);
		printf ("min C = %4.1f degrees Celsius\n", min_c);

// Call MaxMin.  Pass it the address of the FAHRENHEIT array which is used to send temperatures 
// INTO MaxMin() and the number of data points.  Also, pass the address of max_f and min_f which will
// hold the max and min Fahrenheit temperatures being passed OUT OF MaxMin.		
//
// Print the max and min Celsius temperatures.

		MaxMin(*** CODE ***);
		printf ("max F = %4.1f\n", max_f);
		printf ("min F = %4.1f\n", min_f);

// Close the data file.		
		fclose(fp1);
	}
}

// C2F() converts Celsius to Fahrenheit
// C2F() expects a pointer to a float, p1, a pointer to a float, p2, and an integer, count.
// C2F() does not RETURN a value.  
//
// p1 is used to pass the Celsius temperatures INTO C2F.
// p2 is used to pass the conversion results back to main() to be stored in the Fahrenheit array.
// count is the number of data points.

void C2F(float *p1, *** CODE *** p2, int count)
{
// Declare a local counter
	int i;

// Loop over the data.  Dereference p1 to GET the Celsius value and convert it to Fahrenheit.
// Dereference p2 to SET the converted value.
	for (i = 0; i < count; i++)
	{
		*** CODE *** = *** CODE *** * 1.8 + 32;
	}
}

// AverageTemp() calculates the average temperature in a data set
// AverageTemp() expects a pointer to a float, p1 and an integer, count.  
//
// p1 is the address the array of temperatures being passed INTO AverageTemp().
//	count is the number of data points.

float AverageTemp(*** CODE *** p1, int count)
{
// Declare a counter
	int i;
// Declare a place to store the average.  Return this value at the end of AverageTemp().	
	float average;
// Declare and initialize the running sum	
	float sum = 0.0;

// Loop over the data adding up the running sum using p1 to get each data point.	
	for (i = 0; i < count; i++)
	{
		sum = sum + *** CODE ***;
	}
	
// Compute the average	
	average = sum/count;

// Return the average to main()	
	return average;
}

// MaxMin() determines the maximum and minimum values in a data set.
// MaxMin() expects a pointer to a float, p1, an integer, count, a pointer to a float, pmax,
// and a pointer to a float, pmin.
//
// p1 is the address the array of temperatures being passed INTO MaxMin
// count is the number of data points
// pmax is the address of the variable in main() which will store the maximum value
// and is being passed OUT OF MaxMin()
// pmin is the address of the variable in main() which will store the minimum value
// and is being passed OUT OF MaxMin()

void MaxMin(*** CODE *** p1, int count, *** CODE *** pmax, *** CODE *** pmin)
{
// Declare a loop counter
	int i;
	
// Initialize the max and minimum values using p1, pmax, and pmin.  Dereference
// p1, pmax, and pmin to GET and SET the values as appropriate
	*pmax = *** CODE ***;
	*pmin = *** CODE ***;

// Loop over all the data points.	
	for (i = 0; i < count; i++)
	{
// Use p1 and pmax to compare each data point to the max.  If the current data point
// is greater than the max, assign the current data point to be the new max.	
// Dereference p1 and pmax to GET and SET the values as appropriate.

		if (*** CODE *** > **** CODE ***)
		{
			*pmax = *** CODE ***;
		}
// Use p1 and pmin to compare each data point to the min.  If the current data point
// is less than the min, assign the current data point to be the new min.
// Dereference p1 and pmin to GET and SET the values as appropriate.		
		if (*** CODE *** < **** CODE ***)
		{
			*pmin = *** CODE ***;
		}
	}	
}


