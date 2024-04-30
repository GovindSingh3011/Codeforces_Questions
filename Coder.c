#include <stdio.h>
int main()
{
    int a, n;
    scanf("%d", &a);

    printf("%d\n", (a * a + 1) / 2);

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (i % 2 == 0 && j % 2 == 0)
            {
                putchar('C');
            }
            else if (i % 2 != 0 && j % 2 != 0)
            {

                putchar('C');
            }
            else
            {
                putchar('.');
            }
        }
        printf("\n");
    }

    return 0;
}