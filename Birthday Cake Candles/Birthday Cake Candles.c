#include<stdio.h>
int main()
{
    int count=0;
    int i, j;
    int n;
    scanf("%d", &n);
    int can[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &can[i]);
    }

    int max=0;

    for(j=0; j<n; j++)
    {
        if(max <can[j])
        {
            max = can[j];
        }
    }

    for(int k=0; k<n; k++)
    {
        if(can[k]==max)
        {
            count++;
        }
    }
    printf("%d\n", count);


    return 0;
}
