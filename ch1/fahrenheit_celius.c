#include <stdio.h>

/* print Fahrenheit-Celcius table
	for fahr = 0, 20, ..., 300 */
main()
{
	float fahr, celcius;
	int lower, upper, step;
	
	#define lower = 0;
	#define upper = 300;
	#define step = 20;

	fahr = lower;
	while(fahr <= upper) {
		celcius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f %6.1f\n", fahr, celcius);
		fahr = fahr + step;
	}
} 
