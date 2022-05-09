#include <stdio.h>

int main(void)
{
    float userTotal;

    printf("Enter Total:");
    scanf("%g",&userTotal);

    printf("Total after 5%% tax applied:\t$%.2f\n\n",userTotal*1.05f);

    return 0;
}