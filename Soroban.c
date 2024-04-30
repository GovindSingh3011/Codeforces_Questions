#include <stdio.h>
int main()
{
    int n, a;
    scanf("%d", &n);

    if (n == 0)
    {
        printf("O-|-OOOO");
    }

    while (n != 0)
    {
        a = n % 10;
        n = n / 10;

        switch (a)
        {
        case 0:
            printf("O-|-OOOO\n");
            break;
        case 1:
            printf("O-|O-OOO\n");
            break;

        case 2:
            printf("O-|OO-OO\n");
            break;
        case 3:
            printf("O-|OOO-O\n");
            break;
        case 4:
            printf("O-|OOOO-\n");
            break;
        case 5:
            printf("-O|-OOOO\n");
            break;
        case 6:
            printf("-O|O-OOO\n");
            break;
        case 7:
            printf("-O|OO-OO\n");
            break;
        case 8:
            printf("-O|OOO-O\n");
            break;
        case 9:
            printf("-O|OOOO-\n");
            break;
        }
    }

    return 0;
}
