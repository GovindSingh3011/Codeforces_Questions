#include <stdio.h>
int main()
{

    int a[4];

    for (int n = 0; n < 4; n++)
    {
        scanf("%d", &a[n]);
    }

    for (int n = 0; n < 4; n++)
    {
        for (int j = n; j < 4; j++)
        {
            if (a[n] > a[j])
            {
                int x = a[n];
                a[n] = a[j];
                a[j] = x;
            }
        }
    }

    if (a[0] + a[1] > a[2] || a[1] + a[2] > a[3])
    {
        printf("TRIANGLE");
    }

    else if (a[0] + a[1] == a[2] || a[1] + a[2] == a[3])
    {
        printf("SEGMENT");
    }

    else
    {
        printf("IMPOSSIBLE");
    }

    return 0;
}