#include <stdio.h>
int main()
{
    long long int length, breath, size;

    scanf("%lld %lld %lld", &length, &breath, &size);

    long long int div1 = length / size;
    long long int div2 = breath / size;
    if (length % size != 0)
    {
        div1++;
    }

    if (breath % size != 0)
    {
        div2++;
    }

    printf("%lld", div1 * div2);

    return 0;
}