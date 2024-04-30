#include <stdio.h>
#include <string.h>
int main()
{
    int c = 0;
    char s[1000001];
    scanf("%s", s);

    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == '7' || s[i] == '4')
            c++;
    }

    if (c == 4 || c == 7)
        printf("YES");

    else
        printf("NO");

    return 0;
}