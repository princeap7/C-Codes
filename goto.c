#include <stdio.h>
void printNumbers()
{
    int n=1;

    label:
    printf("%d ", n);
    n++;
    if (n<=100)
        goto label;
}

int main()
{
    printNumbers();
    return 0;
}