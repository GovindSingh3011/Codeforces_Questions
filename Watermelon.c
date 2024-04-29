#include <stdio.h>
int main()
{
    int weightofwatermelon;

    scanf("%d", &weightofwatermelon);

    if (weightofwatermelon % 2 == 0 && weightofwatermelon != 2)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}