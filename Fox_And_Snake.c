#include <stdio.h>
int main()
{
    int r, c, a = 1, b = 0;
    scanf("%d %d", &r, &c);

    for (int rc = 1; rc <= r; rc++)
    {
        for (int cc = 1; cc <= c; cc++)
        {
            if (rc % 2 != 0)
            {
                printf("#");
            }
            else if (rc % 2 == 0 && a == 1 && cc == c && b == 0)
            {
                printf("#");
                a = 0;
                b = 1;
            }
            else if (rc % 2 == 0 && a == 0 && cc == 1 && b == 0)
            {
                printf("#");
                a = 1;
                b = 1;
            }

            else
            {
                printf(".");
            }
        }
        b = 0;
        printf("\n");
    }

    return 0;
}