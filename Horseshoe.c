#include <stdio.h>
int main()
{
    int arr[4], c = 0;

    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            if (arr[i] != 0 && arr[i] == arr[j])
            {
                arr[i] = 0;
                c++;
            }
        }
    }
    printf("%d", c);

    return 0;
}