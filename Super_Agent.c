#include <stdio.h>
#include <string.h>
int main()
{
    char arr[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf(" %c", &arr[i][j]);
        }
    }

    if (arr[0][1] == arr[2][1] && arr[0][2] == arr[2][0] && arr[1][0] == arr[1][2] && arr[0][0] == arr[2][2])
    {
        printf("YES");
    }

    else
    {
        printf("NO");
    }

    return 0;
}
