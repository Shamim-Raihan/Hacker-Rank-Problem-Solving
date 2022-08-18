#include<stdio.h>
int main()
{
    int n, i, m, sum=0;
    scanf("%d", &n);
    for(i=0; i<5; i++)
    {
        m = n%10;
        sum = sum + m;
        n = n/10;
    }
    printf("%d\n", sum);
}
