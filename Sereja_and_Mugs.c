#include <stdio.h>
int main()
{
    int a, b, c = 0, d = 0;
    scanf("%d %d", &a, &b);

    int arr[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
        c += arr[i];

        if (d < arr[i])
        {
            d = arr[i];
        }
    }

    if (c - d > b)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }

    return 0;
}