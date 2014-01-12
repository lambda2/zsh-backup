/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   car.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaubin <aaubin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/10 05:14:31 by aaubin            #+#    #+#             */
/*   Updated: 2014/01/10 05:39:10 by aaubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

class Car
{
	private:
		string nom_chauffeur;
	public:
		Car();
		Car(int nb_roues, int nb_portes, int vitesse, int sieges);
		int	nb_roues;
		int	nb_portes;
		int	vitess_max;
		int	nb_sieges;

		void	set_nom_chauffeur(string nom);
		void	afficher(void);
};

