#include<stdio.h>
int main()
{

    int input1, input2;
    float input3, input4;
    scanf("%d%d\n", &input1, &input2);
    scanf("%f%f", &input3, &input4);

    int sum1 = input1 + input2;
    int difference1 = input1-input2;

    float sum2 = input3 + input4;
    float difference2 = input3 - input4;

    printf("%d %d\n", sum1, difference1);
    printf("%.1f %.1f\n", sum2, difference2);


    return 0;
}
