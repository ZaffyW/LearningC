/* machine gives out temperatures every 15 seconds and it sends alert if it's over
the max or min temp. The ending sequence is (-999) not a negative temperature */

#include <stdio.h>
int main (void)

{
    int max;
    int min;
    int temperature;

    scanf ("%d", &max);
    scanf("%d", &min);
    scanf("%d", &temperature);

    while (temperature  <= max && temperature >= min && temperature != -999)
        {
            printf("Nothing to report\n");
            scanf("%d", &temperature);
        }

    if ((temperature  > max || temperature < min) && temperature != -999)
        {
            printf("Alert!");
        }
     if (temperature == -999)
        {
            return 0;
        }


    return 0;


}