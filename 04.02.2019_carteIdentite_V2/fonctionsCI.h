#ifndef FONCTIONSCI_H_INCLUDED
#define FONCTIONSCI_H_INCLUDED

#define TAILLE 15

typedef struct tIdentiter
{
	char sNom[TAILLE];
	char sPrenom[TAILLE];
	char sAdresse[TAILLE];
	char sVille[TAILLE];
	char nCodePostal[TAILLE];
	int nClient;
}tIdentiter;

extern void infosCarte(tIdentiter *ptCarte);
extern void lireInfos();

#endif // FONCTIONSCI_H_INCLUDED
