#include <stdio.h>


int main(){


int c, tabs, blanks, newlines;

tabs = 0;
blanks = 0;
newlines = 0;

while((c = getchar()) != EOF)
	if (c == '\t')
		++tabs;
	else if (c == '\b')
		++blanks;
	else if (c == '\n')
		++newlines;
printf("%s %d\n%s %d\n%s %d\n", "tabs=", tabs,
				 "blanks=", blanks, 
				"newlines=", newlines);
	
		




}
