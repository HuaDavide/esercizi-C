#include <stdio.h>
#include <string.h>
#include <math.h>

int main (int argc, char *argv[])
{
    int annoOggi = 2022;
    if(atoi(argv[1][0] * 10) + atoi(argv[1][1]) > 31 || atoi(argv[1][2]) * 10 + atoi(argv[1][3]) > 12 || atoi(argv[1][4]) * 1000 + atoi(argv[1][5]) * 100 + atoi(argv[1][6]) * 10 + atoi(argv[1][7]) > annoOggi || strlen(argv[1]) > 8 || strlen(argv[1]) < 7)
    {
        printf("valore non valido");
        return 0;
    }

    int giorno = atoi(argv[1][0] * 10) + atoi(argv[1][1]);
    int mese = atoi(argv[1][2]) * 10 + atoi(argv[1][3]);
    int anno = atoi(argv[1][4]) * 1000 + atoi(argv[1][5]) * 100 + atoi(argv[1][6]) * 10 + atoi(argv[1][7]);

    
    printf("la data inserita corrisponde a: %d/%d/%d", giorno,mese,anno);

    return 0;
}