#include <stdio.h>
void main()
{
    int n, d, sum = 0, m;
    printf("Enter a number: ");
    scanf("%d", &n);
    m = n;
    while (n != 0)
    {
        d = n % 10;
        sum += (d * d * d);
        n = n / 10;
    }
    if (sum == m)
        printf("%d is an Armstrong number ", m);

    else
        printf("%d is not an Armstrong number ", m);
}
