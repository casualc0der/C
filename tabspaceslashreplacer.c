#include <stdio.h>

int main (){


int c;

while((c = getchar()) != EOF)
	if (c == '\t')
		printf("%s", "tab");
	else if (c == ' ')
		printf("%s", "space!");
	else if (c == '\b')
		printf("%s", "backspace");
	else if (c == '\\')
		printf("%s", "backslash");




}
