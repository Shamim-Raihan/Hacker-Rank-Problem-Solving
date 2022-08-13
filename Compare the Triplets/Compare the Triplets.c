#include<stdio.h>
int main()
{

    int a[3], b[3], i, j, al = 0, bo = 0, k;
    scanf("%d %d %d",&a[0],&a[1],&a[2]);
    scanf("%d %d %d",&b[0],&b[1],&b[2]);

    for(k=0; k<3; k++)
    {
        if(a[k]>b[k])
        {
            al = al+1;
        }
        else if(a[k]<b[k])
        {
            bo = bo+1;
        }
    }
    printf("%d ", al);
    printf("%d\n", bo);
    return 0;
}
