#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main()
{
    float p, ne, z;

    float pos=0.0, neg=0.0, zero=0.0;
    int i, j, n;
    scanf("%d", &n);
    int ar[n];
    for(i=0; i<n;i++)
    {
        scanf("%d", &ar[i]);

    }

    for(i=0; i<n; i++)
    {
        if(ar[i]>0)
        {
            pos++;
            continue;
        }
        else if(ar[i]<0)
        {
            neg++;
            continue;
        }
        else
        {
            zero++;
            continue;
        }
    }
    p = pos/n;
    ne = neg/n;
    z = zero/n;

    printf("%.6f\n", p);
    printf("%.6f\n", ne);
    printf("%.6f\n", z);
    return 0;
}
