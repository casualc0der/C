#include <stdio.h>


int main() {

int c, counter;

counter = 0;

while((c = getchar()) != EOF)
	if(c == ' ')
		++counter;
	if(counter > 1)
		c = ' ';
	putchar(c);
	printf("%s%d", "number of spaces slapped=", counter);
	counter = 0;




}
