#include <stdio.h>
#include <string.h>
int main()
{
    int a, b, x, c = 0, k = 0;
    int arr[50];

    for (int i = 2; i <= 50; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                c++;
            }
        }
        if (c == 2)
        {
            arr[k] = i;
            k++;
        }
        c = 0;
    }

    scanf("%d %d", &a, &b);

    for (int i = 0; i < k; i++)
    {
        if (arr[i] == a)
        {
            x = i;
        }
    }

    if (arr[x + 1] == b)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}