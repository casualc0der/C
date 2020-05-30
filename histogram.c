#include <stdio.h>


int main(){
int c;
int word_length[100];
int i;

for (i = 0; i < 100; ++i)
  word_length[i] = ' ';

while ((c=getchar()) != EOF)
{
  if(c == '\n' || c == ' ' || c == '\t')
    putchar('\n');
  else
    putchar('*');
}

}

