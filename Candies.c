#include <stdio.h>
int main()
{

    int x, y;

    scanf("%d %d", &x, &y);

    int a = x / y;
    int b = x % y;

    if (b == 0)
    {
        for (int i = 0; i < y; i++)
        {
            printf("%d ", a);
        }
    }

    else
    {
        for (int i = 0; i < y - b; i++)
        {
            printf("%d ", a);
        }
        for (int i = y - b; i < y; i++)
        {
            printf("%d ", a + 1);
        }
    }

    return 0;
}