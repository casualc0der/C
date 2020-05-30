#include <stdio.h> 

int main(){

float celcius, fahr;
int lower, upper, step;

lower = 0;
upper = 300;
step = 20;

celcius = lower;

printf("%s  %s\n", "Celcius", "Fahrenheit");
while (celcius <= upper){

fahr = celcius * (9.0/5.0) + 32;

printf("%3.0f\t %6.1f\n", celcius, fahr);
celcius = celcius + step;


}



}
