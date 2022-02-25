#include <stdio.h>

int main()
{
    int n;

    do
    {
        printf("inserisci il valore di n:\n");
        scanf("%d", &n);

    }while(n <= 1);

    while(n != 0)
    {
        n--;
        printf("%d\n", n);
    }

    return 0;
}