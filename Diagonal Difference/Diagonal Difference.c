#include<stdio.h>
int main()
{
    int n, i, j, k, sum1=0, sum2=0, ans;
    scanf("%d", &n);
    int ar[n][n];
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }
    for(i=0; i<n; i++)
    {
        sum1 = sum1 + ar[i][i];
    }
    for(i=0,j=n-1; i<n,j>=0; i++,j--)
    {
        sum2 = sum2+ar[i][j];
    }
    ans = abs(sum1-sum2);
    printf("%d\n", ans);
    return 0;
}
