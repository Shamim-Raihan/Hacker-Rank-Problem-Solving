#include<stdio.h>
int main()
{

    int a[5], i, j;
    long sum=0, max, min, max_ans, min_ans;
    for(i=0; i<5; i++)
    {
        scanf("%d", &a[i]);
        sum = sum+a[i];
    }

    max = a[0];
    min = a[0];
    for(i=1; i<5; i++)
    {

        if(max<a[i])
        {
            max = a[i];
        }
        if(min>a[i])
        {
            min = a[i];
        }
    }
    max_ans = sum-max;
    min_ans = sum-min;
    printf("%ld ", max_ans);
    printf("%ld\n", min_ans);




    return 0;
}
