#include <stdio.h>
#include <stdlib.h>
#include "fonctionsCI.h"

void infosCarte(tIdentiter *ptCarte)
{
    // On defini les variables
    int nChoix;
    int nClient = 1;
    FILE* fichier = NULL;
    fichier = fopen("Cartes Identites.txt", "a");

    do
    {
        // On demande les infos
        printf("Nom:\n");
        fflush(stdin);
        gets((*ptCarte).sNom);

        printf("Prenom:\n");
        gets((*ptCarte).sPrenom);

        printf("Adresse:\n");
        gets((*ptCarte).sAdresse);

        printf("Ville:\n");
        gets((*ptCarte).sVille);

        printf("Code postal:\n");
        gets((*ptCarte).nCodePostal);


        // On ecrit les infos
        fprintf(fichier, "---Client %d---\n", nClient);

        fputs("Nom : ", fichier);
        fputs((*ptCarte).sNom, fichier);
        fputs("\n", fichier);

        fputs("Prenom : ", fichier);
        fputs((*ptCarte).sPrenom, fichier);
        fputs("\n", fichier);

        fputs("Adresse : ", fichier);
        fputs((*ptCarte).sAdresse, fichier);
        fputs("\n", fichier);

        fputs("Ville : ", fichier);
        fputs((*ptCarte).sVille, fichier);
        fputs("\n", fichier);

        fputs("Code postal : ", fichier);
        fputs((*ptCarte).nCodePostal, fichier);
        fputs("\n\n", fichier);

        nClient++;

        printf("Continuer a ecrire ? (1 : Oui, 2 : Non)\n");
        scanf("%d", &nChoix);
    } while (nChoix != 2);

    fclose(fichier);
}

void lireInfos()
{
    FILE* fichier = NULL;
    int caractereActuel = 0;

    fichier = fopen("Cartes Identites.txt", "r");

    if (fichier != NULL)
    {
        // Boucle de lecture des caractères un à un
        do
        {
            caractereActuel = fgetc(fichier); // On lit le caractère
            printf("%c", caractereActuel); // On l'affiche
        } while (caractereActuel != EOF); // On continue tant que fgetc n'a pas retourné EOF (fin de fichier)

        fclose(fichier);
    }

    else
    {
        printf("LE FICHIER N'EXISTE PAS !\n");
        fclose(fichier);
    }
}
