#include <stdio.h>
#include <limits.h>
#define DIM INT_MAX

void VisualizzaContenuto(int numeri[], int indice)
{
    for (int i = 0; i < indice; i++)

        printf("%d\n", numeri[i]);
}

int main()
{
    int numeri[DIM];
    int numero;
    int indice = 0;

    do
    {
        printf("==========Menù==========\n");
        printf("  1.Mostra Contenuto\n");
        printf("  2.Inserisci a coda\n");
        printf("  3.Modifica elemento\n");
        printf("  4.Elimina elemento\n");
        printf("  5.Ricerca elemento\n");
        printf("  0.Termina programma\n");
        printf("========================\n\n");

        printf("Inserisci l'opzione: ");
        scanf("%d", &numero);

        switch (numero)
        {
        case 1:
            VisualizzaContenuto(numeri, indice);
            break;
        case 2:
            if (indice < DIM)
                printf("Inserisci il numero: ");
            scanf("%d", &numeri[indice]);
            indice++;
            break;

        default:
            printf("PROGRAMMA TERMINATO");
            return 0;
            break;
        }

    } while (numero != -1);
}