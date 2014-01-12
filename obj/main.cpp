



#include "acar.h"


int main()
{
	ACar *quatrelle = new ACar();
	quatrelle->afficher();
	quatrelle->set_nom_chauffeur("Pedro");
	quatrelle->afficher();
	return (0);
}
