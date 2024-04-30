#include <stdio.h>
int main()
{
    int a, b, c, d, t, u = 0;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &t);

    for (int i = 1; i <= t; i++)
    {
        if (i % a == 0 || i % b == 0 || i % c == 0 || i % d == 0)
        {
            u++;
        }
    }
    printf("%d", u);

    return 0;
}