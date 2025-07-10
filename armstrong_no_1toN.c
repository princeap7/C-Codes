#include <stdio.h>
void main()
{
    int n, d, m, i, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum = 0;
        m = i;
        while (i > 0)
        {
            d = i % 10;
            sum = sum + (d * d * d);
            i = i / 10;
        }
        if (sum == m)
        {
            printf("%d", m);
        }
    }

}
