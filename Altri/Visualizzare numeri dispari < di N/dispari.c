#include <stdio.h>

int main()
{
    int n;
    int numero = 1;

    do
    {
        printf("inserisci il valore di n: ");
        scanf("%d", &n);

        if(n<= 0)
            printf("Hai inserito un valore di n non accettato, n deve essere maggiore di zero\n\n");
    }while(n <= 0);

    do
    {
        printf("%d,", numero);
        numero = numero +2;
    }while(numero <= n);

    printf("\n\nprogramma terminata\n");

    return 0;
}