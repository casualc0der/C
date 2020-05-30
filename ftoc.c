#include <stdio.h>

/* print Fahrenheit-Celcius table
for fahr = 0, 20, ... 300 */

int main (){

float fahr, celcius;
int lower, upper, step;

lower = 0; /* lower limit of temperature table */
upper = 300; /* upper limit */
step = 20; /* step size */

fahr = lower;
printf("%s\t%s\n", "Fahrenheit","Celcius");
while (fahr <= upper) {

	celcius = 5.0 /9.0 * (fahr - 32.0);
	printf("%6.0f\t%9.1f\n", fahr, celcius);
	fahr = fahr + step;

}





} 
