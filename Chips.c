#include <stdio.h>
int main()
{
    int n, m, i = 0;

    scanf("%d %d", &n, &m);

    while (m >= i)
    {
        m = m - i;
        i++;

        if (i > n)
            i = 1;
    }

    printf("%d", m);

    return 0;
}