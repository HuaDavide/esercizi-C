#include <stdio.h>
#include <string.h>

int main()
{
    double incassoBevande = 0;
    double incassoRistorazione = 0;
    int numBevande = 0;
    int numRistorazione = 0;
    char tipologia[12];
    double incasso;

    do
    {

        do
        {
            printf("Inserisci la tipologia di vendita: \n");
            scanf("%s", tipologia);

        }while(strcmp(tipologia, "bevande") != 0 && strcmp(tipologia, "ristorazione") != 0 && strcmp(tipologia, "esci") != 0);


        if(strcmp(tipologia, "esci") != 0)
        {
            do
            {
                printf("Inserisci l'incasso\n");
                scanf("%lf", &incasso);
            }while (incasso <= 0);
            
            if(strcmp(tipologia, "bevande") == 0)
            {
                incassoBevande += incasso;
                numBevande++;
            }
            else
            {
                incassoRistorazione += incasso;
                numRistorazione++;
            }
        }
    
    }while(strcmp(tipologia, "esci") != 0);

    if(numBevande > numRistorazione)
        printf("è stato venduto di più in quantità le bevande: %d\n", numBevande);
    else
        printf("è stato venduto di più in quantità le ristorazioni: %d\n", numRistorazione);

    
    incassoRistorazione /= numRistorazione;
    incassoBevande /= numBevande;

    printf("La media dell'incasso di bevande è uguale a %f\n", incassoBevande);
    printf("La media dell'incasso di ristorazione è uguale a %f\n", incassoRistorazione);

    return 0;
}