#include <stdio.h>
int main()
{
    int y, w, s;
    scanf("%d %d", &y, &w);

    s = y > w ? y : w;

    int n = (6 - s) + 1;

    switch (n)
    {
    case 1:
        printf("1/6");
        break;
    case 2:
        printf("1/3");
        break;
    case 3:
        printf("1/2");
        break;
    case 4:
        printf("2/3");
        break;
    case 5:
        printf("5/6");
        break;
    case 6:
        printf("1/1");
        break;
    }

    return 0;
}