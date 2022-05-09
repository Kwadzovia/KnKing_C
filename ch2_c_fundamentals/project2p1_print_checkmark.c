#include <stdio.h>
#include <stdint.h>

#define CHECK_HEIGHT 3
int main(void)
{

    uint8_t direction = 0;
    if(CHECK_HEIGHT <= 1)
    {
        printf("Checkmark height too short to make a checkmark!\n");
    }
    else
    {
        for(uint8_t i = (CHECK_HEIGHT * 2 - 1); i > 0; i--)
        {
            // Padding Before lefthandside
            for(uint8_t j = 0; j < (CHECK_HEIGHT*2 - i); j++)
            {
                printf(" ");
            }

            if(i > CHECK_HEIGHT-1)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }

            // Padding Inbetween
            for(uint8_t j = 0; j < (i*2-1); j++)
            {
                printf(" ");
            }
            printf("*\n");

        }

        //Final Point
        for(uint8_t i = 0; i < CHECK_HEIGHT * 2; i++)
        {
            printf(" ");
        }
        printf("*\n");
    }

    return 0;
}