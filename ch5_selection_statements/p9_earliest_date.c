#include <stdio.h>

int main(void)
{
    int mon1 = 0;
    int mon2 = 0;
    int day1 = 0;
    int day2 = 0;
    int year1 = 0;
    int year2 = 0;

    int firstEarlier = 0;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d",&mon1,&day1,&year1);

    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d",&mon2,&day2,&year2);

    if((mon1 == mon2) && (day1 == day2) && (year1 == year2))
    {
        printf("Same Dates!\n");
    }
    else
    {
        if(year1 == year2)
        {
            if(mon1 == mon2)
            {
                if(day1 < day2)
                {
                    firstEarlier = 1;
                }
            }
            else if (mon1 < mon2)
            {
                firstEarlier = 1;
            }
        }
        else if(year1 < year2)
        {
            firstEarlier = 1;
        }
        else
        {
            //do nothing
        }

        if(firstEarlier)
        {
            printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d\n",mon1,day1,year1,mon2,day2,year2);
        }
        else
        {
            printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d\n",mon2,day2,year2,mon1,day1,year1);
        }
    }

    return 0;
}