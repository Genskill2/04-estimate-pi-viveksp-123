#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float Wallis(int n)
{

    if n <= 0
        return 0;

    float pi = 1;

    for (i=0;i<n+1;i++)
    {

        pi *= (4 * (i*i))/(4(i*i) - 1);
    }
    return pi*2;
    
}
float MonteCarlo(int n):

    if n <= 0
        return 0;

    int count = 0;

    for (i=0;i<n;i++)
    {

        x = frandom();
        y = frandom();

        if x*x + y*y < 1
            count += 1;
    }
    return 4*count/n;
}


