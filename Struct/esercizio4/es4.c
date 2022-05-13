#include <stdio.h>
#include <string.h>
#define DIM 5

typedef struct 
{
    char nome[20];
    char ruolo[20];
    char squadra[20];

}calciatore_t;

void visualizzaMilan(calciatore_t calciatori[])
{
    for(int i = 0; i<DIM; i++)
        if(strcmp(calciatori[i].squadra, "milan") == 0)
            printf("NOME: %s\n", calciatori[i].nome);
}

void visualizzaNomeC(calciatore_t calciatori[])
{
    for(int i = 0; i<DIM; i++)
        if(calciatori[i].nome[0] == 'c')
        printf("NOME: %s\n", calciatori[i].nome);
}

int main()
{
    calciatore_t calciatori[DIM];

    for(int i = 0; i<DIM; i++)
    {
        printf("Inserisci il nome del calciatore: ");
        scanf("%s", calciatori[i].nome);
        printf("Inserisci il ruolo del calciatore: ");
        scanf("%s", calciatori[i].ruolo);
        printf("Inserisci la squadra del calciatore: ");
        scanf("%s", calciatori[i].squadra);
        printf("\n");
    }

    printf("\nI calciatori appartenente alla squadra milan sono:\n");
    visualizzaMilan(calciatori);

    printf("\nI calciatori che hanno il come che inizia per c sono: \n");
    visualizzaNomeC(calciatori);

    return 0;
}