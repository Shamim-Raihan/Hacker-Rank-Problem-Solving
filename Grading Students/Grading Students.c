#include<stdio.h>

int sol(int num)
{
    int mod, q, r;
    if(num >= 38)
        {
            mod = num % 5;
            q = 5-mod;
            if(q <=2)
            {
                r = num+q;
                return r;

            }
            else
            {
                return num;
            }
        }
        else
        {
            return num;
        }

}

int main()
{
    int num,i, n;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &num);
        printf("%d\n", sol(num));

    }


    return 0;
}



