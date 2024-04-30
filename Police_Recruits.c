#include <stdio.h>
int main()
{
    int n, p = 0, c = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 1)
        {
            p += arr[i];
        }
        else if (arr[i] == -1)
        {
            if (p >= 1)
            {
                p--;
            }
            else
            {
                c++;
            }
        }
    }
    printf("%d", c);

    return 0;
}