#include <stdio.h>
int main()
{
    int a, arr[101], s = 0, ch = 0, c = 0;

    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
        s = s + arr[i];
    }

    for (int i = 0; i < a; i++)
    {
        ch = s - arr[i];
        if (ch % 2 == 0)
        {
            c++;
        }
    }

    printf("%d", c);

    return 0;
}