#include<stdio.h>

void update(int *a, int *b)
{
    int x, y;
    x = *a+*b;
    y = *a-*b;
    *a = x;
    *b = abs(y);
}

int main()
{
    int *a, *b;
    scanf("%d%d", &a, &b);
    update(&a, &b);
    printf("%d\n%d\n", a, b);
    return 0;
}
