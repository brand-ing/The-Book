#include <stdio.h>
/* print Celsius -Fahrenheit table
(exercise 1-4) */
int main()
{
    float fahr, celsius;
    float lower, upper, step;
    lower = 0; /* lower limit of temperature scale */
    upper = 100; /* upper limit */
    step = 5; /* step size */
    celsius = lower;
    printf("C\tF\n");
    while (celsius <= upper) {
        fahr = ((9.0/5.0) * celsius)+32.0;
        printf("%3.0f %6.1f\n",celsius,fahr);
        celsius = celsius + step;
    }
    return 0;
}
