#include <stdio.h>

int main ()
{
    int a, b, prodotto;
    int somma = 0;

    do
    {
        printf("Inserisci il valore del numero a: ");
        scanf("%d", &a);
        printf("Inserisci il valore del numero b: ");
        scanf("%d", &b);

        prodotto = a*b;
        somma = somma + prodotto;

        printf("il prodotto è uguale a: %d\n" , prodotto);

    }while(a != 0 && b != 0);

    printf("la somma dei prodotti è uguale a: %d", somma);

    return 0;
}
