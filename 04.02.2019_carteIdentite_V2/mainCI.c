#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fonctionsCI.h"

int main()
{

    int choix;
    tIdentiter tCarte;
    tIdentiter *ptCarte;
    ptCarte = &tCarte;

    printf("=== Menu ===\n\n");
    printf("1 : Ecrire\n");
    printf("2 : Lire\n");
    printf("0 : Quitter\n");
    printf("\nVotre choix ?\n");
    scanf("%d", &choix);

    printf("\n");

    switch (choix)
    {
        case 1:

            infosCarte(ptCarte);

        break;

        case 2:

            lireInfos();

        break;

        default:
        break;
    }

    return 0;
}
