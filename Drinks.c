#include <stdio.h>
int main()
{
    int n;
    float s = 0;

    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        s += arr[i];
    }

    printf("%f", s / n);

    return 0;
}