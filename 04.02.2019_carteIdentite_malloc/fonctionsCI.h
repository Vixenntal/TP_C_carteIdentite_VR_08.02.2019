#ifndef FONCTIONSCI_H_INCLUDED
#define FONCTIONSCI_H_INCLUDED

#define TAILLE 15

typedef struct tIdentiter
{
	char* sNom;
	char* sPrenom;
	char* sAdresse;
	char* sVille;
	char* nCodePostal;
	int nClient;
}tIdentiter;

extern void infosCarte(tIdentiter *ptCarte);
extern void lireInfos();

#endif // FONCTIONSCI_H_INCLUDED
