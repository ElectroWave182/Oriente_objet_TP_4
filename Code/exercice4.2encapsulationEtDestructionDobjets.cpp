# include <iostream>
# include "Personnage.h"

using namespace std;


int main ()
{
	
	Personnage joueur ("Tom", 20);
	cout << joueur.nom << "\n";
	
	Personnage autre ("JeanMi", -11);
	cout << autre.nom << "\n\n";
	
	
	// 2)
	
	autre.changeVie (17);
	cout << autre.stat ();
	
	
	// 3)
	
	/*
	 *	Changement de vie en négatif (provoque une erreur) :
	 *	autre.changeVie (-17);
	 *	cout << autre.stat ();
	 */


	return 0;
	
}
