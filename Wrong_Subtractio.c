#include <stdio.h>
int main()
{
    long int n;
    int k, x = 0;

    scanf("%ld %d", &n, &k);

    while (x < k)
    {
        if (n % 10 == 0)
        {
            n = n / 10;
        }
        else
        {
            n = n - 1;
        }
        x++;
    }

    printf("%ld", n);

    return 0;
}