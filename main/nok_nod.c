#include <stdio.h>

int main()
{
    int a = 10, b = 25, min1 = a, min2 = b, nok = 0;

    while (min1 != min2)
        if (min1 > min2)
            min1 -= min2;
        else
            min2 -= min1;


    nok = a * b;
    nok /= min1; /* nok /= min1*/
    printf("\n Nod(%d, %d) = %d", a, b, min1);
    printf("\n Nok(%d, %d) = %d", a, b, nok);        
    return 0;
}