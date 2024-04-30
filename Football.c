#include <stdio.h>
#include <string.h>
int main()
{
    char s[101];

    scanf("%s", &s);

    if (strstr(s, "0000000"))
    {
        printf("YES");
    }
    else if (strstr(s, "1111111"))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}