# include <iostream>
# include "Personnage.h"

using namespace std;


int main ()
{
	
	// 3)
	
	Personnage joueur ("Tom", 20);
	cout << joueur.nom << "\n";
	
	Personnage autre ("JeanMi", -11);
	cout << autre.nom << "\n\n";
	
	/*
	 *  Redéclaration (provoque une erreur) :
	 *  Personnage joueur ("Frank", 25);
	 */
	
	
	// 5)
	
	cout << autre.stat ();
	
	
	// 6)
	
	/*
	 *  Réattribution privée (provoque une erreur) :
	 *  autre.vie = 17;
	 */
	
	
	// 7)
	
	joueur << autre;
	cout << joueur.stat ();
	cout << autre.stat ();
	
	
	// 8)
	
	++ joueur;
	cout << joueur.stat ();
	
	
	// 9)
	
	& autre;
	& joueur;
	& joueur;


	return 0;
	
}
