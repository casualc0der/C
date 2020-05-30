#include <stdio.h>
#define IN 1
#define OUT 0


int main()
{
int c;

while((c = getchar()) != EOF)
	if(c == ' '){
		printf("%c",'\n');
		putchar(c);
}	else {
		putchar(c);
}
}
