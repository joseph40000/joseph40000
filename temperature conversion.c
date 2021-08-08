#include <stdio.h>
#include <stdlib.h>


/* print fahrenheit-celsius table
    for fahr = 0, 20, ..., 300 */

main()
{
    float fahr, celcious;
    int lower, upper, step;

    lower = 0;    /* lower limit of temperature table */
    upper = 300;  /*upper limit */
    step = 20;    /* step size */

    fahr = lower;
    while (fahr <= upper) {
        celcious = (5.0/9.0) * (fahr-32.0);
        printf("%3.of %6.1f\n", fahr, celcious);
        fahr = fahr + step;

    }
    {
      /*the two lines;*/
        /* print fahrenheit-celcius table
             for = fahr = 0, 20, ..., 300 */
    }
    return 0;
}
