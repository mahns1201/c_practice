#include <stdio.h> 

int main(void)
{
    int i, j, count;
    count = 0;

    for (i = 2; i <= 100; i++)
    {
        for (j = 1, count = 0; j <= i; j++)
        {
            if (i % j == 0)
                count++;
        }
        if (count == 2)
            printf("%d ", i);
    }
    return 0;
}