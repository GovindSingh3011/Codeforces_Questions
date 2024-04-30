#include <stdio.h>
int main()
{

    int m, arr[101], x, y, year = 0;

    scanf("%d", &m);

    for (int i = 1; i < m; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d %d", &x, &y);

    for (int i = x; i < y; i++)
    {
        year += arr[i];
    }

    printf("%d", year);

    return 0;
}