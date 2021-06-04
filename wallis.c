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
