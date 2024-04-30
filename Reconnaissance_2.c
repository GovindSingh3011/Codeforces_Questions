#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, arr[101], min = 1000, s1, s2;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 1; i <= n; i++)
    {
        int j = i + 1;
        if (j > n)
        {
            j = 1;
        }
        if ((abs(arr[i] - arr[j]) < min))
        {
            min = abs(arr[i] - arr[j]);
            s1 = i;
            s2 = j;
        }
    }
    printf("%d %d", s1, s2);

    return 0;
}