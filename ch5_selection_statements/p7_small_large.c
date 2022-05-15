#include <stdio.h>

int main(void)
{

    int var1 = 0;
    int var2 = 0;
    int var3 = 0;
    int var4 = 0;

    int smallestVar = 0;
    int largestVar = 0;

    printf("Enter four integers: ");
    scanf("%d %d %d %d",&var1,&var2,&var3,&var4);

    largestVar = (var1 > var2) ? var1 : var2;
    largestVar = (largestVar > var3) ? largestVar : var3;
    largestVar = (largestVar > var4) ? largestVar : var4;

    smallestVar = (var1 < var2) ? var1 : var2;
    smallestVar = (smallestVar < var3) ? smallestVar : var3;
    smallestVar = (smallestVar < var4) ? smallestVar : var4;

    printf("Largest: %d\n",largestVar);
    printf("Smallest: %d\n",smallestVar);

    return 0;
}