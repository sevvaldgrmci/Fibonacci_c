#include <stdio.h>

void fibonacci(int n)
{
    int a = 0, b = 1, next;
    printf("Fibonacci Sayilari:\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a);
        next = a + b;
        a = b;
        b = next;
    }
}

int main()
{
    int n;

    printf("Kac adet Fibonacci sayisi gormek istiyorsunuz: ");
    scanf("%d", &n);

    fibonacci(n);

    return 0;
}