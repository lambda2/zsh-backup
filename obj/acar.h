#ifndef ACAR_H
#define ACAR_H

#include <iostream>
#include <string>

using namespace std;

class ACar
{

	public:
		ACar();
		ACar(int nb_roues, int nb_portes, int vitesse, int sieges);
		int	nb_roues;
		int	nb_portes;
		int	vitess_max;
		int	nb_sieges;
		void	set_nom_chauffeur(string nom);
		void	afficher(void);

	private:
		string nom_chauffeur;
};

#endif // ACAR_H
