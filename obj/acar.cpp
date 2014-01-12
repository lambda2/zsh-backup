#include "acar.h"

using namespace std;

ACar::ACar()
{
	this->nb_roues = 4;
	this->nb_portes = 4;
	this->vitess_max = 120;
	this->nb_sieges = 4;
	this->nom_chauffeur = "on se sait pas qui";
}

ACar::ACar(int nb_roues, int nb_portes, int vitesse, int sieges)
{
	this->nb_roues = nb_roues;
	this->nb_portes = nb_portes;
	this->vitess_max = vitesse;
	this->nb_sieges = sieges;
	this->nom_chauffeur = "on se sait pas qui";
}

void	ACar::set_nom_chauffeur(string nom)
{
	this->nom_chauffeur = nom;
}

void	ACar::afficher(void)
{
	cout << "notre quatrelle a " << this->nb_roues << " roues, " << this->nb_sieges
		 << " sieges, va a " << this->vitess_max << " km/h et est conduite par "
			<< this->nom_chauffeur << " !!!" << endl;
}
