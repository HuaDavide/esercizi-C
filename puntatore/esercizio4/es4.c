#include <stdio.h>
#include <limits.h>


void visualizza(int array[], int n)
{
	for (int i = 0; i < n; i++)
		printf("Il valore in posizione %d è: %d\n", i, array[i]);

}

void inserireCoda(int numeri[], int *indice, int numero)
{
    
    
    numeri[*indice] = numero;
    (*indice)++;
}

void modifica(int numeri[], int posizione, int valore)
{
    numeri[posizione] = valore;
}

void eliminare(int numeri[], int posizione, int *indice)
{
    for(int i = posizione; i<*indice;i++)
    {
        numeri[i] = numeri[i+1];
    }

    *indice--;
}

void inserirePosizione(int numeri[], int posizione, int valore)
{
    numeri[posizione] = valore;
}

void visualizzaContrario(int numeri[], int indice)
{
    for (int i = indice -1; i>= 0; i--)
    {
        printf("Il valore alla posizione %d è uguale a %d", i, numeri[i]);
    }
}

int ricerca(int numeri[], int valore, int indice)
{
    for(int i = 0; i<indice;i++)
        if(numeri[i] == valore)
            return i;
    
    return -1;

}
int main()
{
    int numeri[SHRT_MAX];
    int scelta;
    int indice = 0;
    int numero, valore, posizione;

    while(1)
    {
        

        printf("Inserire 1 per visualizzare l'array\n");
        printf("Inserire 2 per inserire a coda all'array\n");
        printf("Inserire 3 per modificare un elemento\n");
        printf("Inserire 4 per eliminare un elemento\n");
        printf("Inserire 5 per ricercare un elemento\n");
        printf("Inserire 6 per inserire in una certa posizione\n");
        printf("Inserire 7 per visualizzare all'inverso l'array\n");
        printf("Inserire 8 per visualizzare l'elemento maggiore nell'array\n");
        printf("Inserire 0 per usire dal programma\n\n\n");

        scanf("%d", &scelta);

        switch(scelta)
        {
            case 0: printf("PROGRAMMA TERMINATA");
                    return 0;
            break;

            case 1:
                visualizza(numeri, indice);
                break;
            case 2:
            printf("Inserisci il numero da inserire a coda\n");
            scanf("%d", &numero);
            inserireCoda(numeri, &indice, numero);
            break;

            case 3:
                printf("Inserisci il valore da modificare:\n\n");
                scanf("%d", &valore);
                posizione = ricerca(numeri, valore, indice);
                if(posizione != -1)
                {
                    printf("Inserisci il nuovo valore:\n");
                    scanf("%d", &valore);
                    modifica(numeri, posizione, valore);
                    printf("Il numero al posizione %d è stato modificato in: %d", posizione, valore);
                }
                else
                printf("numero non trovato");
                break;

            case 4:
                printf("Inserisci il valore da eliminare:\n\n");
                scanf("%d",&valore);
                posizione = ricerca(numeri, valore, indice);
                
                if (posizione != -1)
                {
                        eliminare(numeri, posizione, &indice);
                    
                    printf("Il numero al posizione %d è stato eliminato", posizione);
                }
                    
                    else
                    printf("Valore non esiste");
                
                
                    
                
                break;
            
            case 5:

                printf("Inserisci il valore da ricercare\n\n");
                scanf("%d",&valore);
                posizione = ricerca(numeri, valore, indice);
                if(posizione != -1)
                
                printf("Il valore %d di ritrova nella posizione: %d", valore, posizione);
                else
                printf("numero non trovato");
                break;

            case 6:
                printf("inserire la posizione da inserire:\n\n ");
                scanf("%d", &posizione);
                if (posizione < indice)
                {
                    printf("inserisci il numero da inserire:\n");
                    scanf("%d", &valore);
                    inserirePosizione(numeri, posizione, valore);
                }
                else
                printf("posizione non trovato \n\n");
            break;

            case 7:
                visualizzaContrario(numeri, indice);
                break;
            default: printf("opzione non trovata\n\n");
            break;

            

        }
        
        
    }
        
    
}