# include <iostream>
# include "Magicien.h"

using namespace std;


int main ()
{
	
	cout << Personnage:: trimJump ("1ere ligne et...\n");
	cout << " il y a pas eu de saut de ligne\n";


	// 2)
	
	/*
	 *  Syntaxe pour que la classe A hérite de B :
	 *  ------------------------------------------
	 *  
	 *  class A:
	 *  public B
	 *  {...};
	 */
    
	// 5)
	
	Magicien sorcier1 ("Josselin", 75, 15);
	cout << sorcier1.stat ();
	
	Magicien sorcier2 ("Jclaude", 100, 10);
	cout << sorcier2.stat ();
	
	Personnage guerrier ("Golem", 400);
	cout << guerrier.stat ();
	
	
	// 7 et 8)
	
	srand (time (NULL));
	int randomNb;
	
	for
	(int _ = 0; _ < 5; _ ++)
	{
		randomNb = rand () % 101 - 50;
		sorcier1.changeVie (randomNb);
		cout << sorcier1.stat ();
		
		randomNb = rand () % 101 - 50;
		sorcier2.changeVie (randomNb);
		cout << sorcier2.stat ();
	}
	
	
	// 9)
	
	for
	(int _ = 0; _ < 5; _ ++)
	{
		randomNb = rand () % 101 - 50;
		guerrier.changeVie (randomNb);
		cout << guerrier.stat ();
		
		
		randomNb = rand () % 101 - 50;
		sorcier2.changeVie (randomNb);
		cout << sorcier2.stat ();
	}
	
	/*
	 *  La méthode de la classe "Personnage" a ici été appelée pour le guerrier,
	 *  mais c'est maintenant celle de la classe fille "Magicien" qui s'est
	 *  exécutée pour sorcier2 ("changeVie" de "Personnage" était appelée avant
	 *  d'être redéclarée avec "virtual").
	 *  
	 *  En règle générale, comme "changeVie" est virtuelle, la méthode appelée
	 *  est tout simplement celle de la classe de l'instance qui correspond.
	 */
	
	
	return 0;
	
}
