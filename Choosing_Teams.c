#include <stdio.h>
int main()
{
    int n, k, a, v = 0;
    scanf("%d %d ", &n, &k);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        if (a + k <= 5)
            v++;
    }
    printf("%d", v / 3);

    return 0;
}