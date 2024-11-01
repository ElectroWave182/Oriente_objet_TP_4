# include "Personnage.h"

using namespace std;


// 2)

class Magicien:
public Personnage
{

	protected:
	
		int mana;
		
		
	public:
	
		// 4.3)
	
		/*
		 *	Attention :
		 *	-----------
		 *	
		 *	Par défaut, un constructeur d'une classe qui hérite appelle toujours
		 *	celui de la classe héritée dont les arguments sont identiques ;
		 *	s'il n'y en a pas, une erreur se produit.
		 *	Mais il est possible de spécifier cet appel grâce à la syntaxe ":".
		 *	(8 lignes en dessous)
		 */
	
		Magicien
		(
			string nom,
			int vie,
			int mana
		):
			Personnage (nom, vie)
		{
			this -> mana = mana;
		}
		
		int getMana ()
		{
			return this -> mana;
		}
		
		
		// 4.4)
		
		string stat ()
		{
			return
				Personnage:: trimJump (Personnage:: stat ())
				+ "Points de mana : "
				+ to_string (this -> mana)
				+ "\n\n"
			;
		}
		
		
		// 4.6)
		
		void changeVie
		(int nouvVie)
		{
			
			if (nouvVie < 0)
			{
				wcout << "Attention : la vie d'un magicien ne peut etre negative.\n";
				this -> vie = 0;
			}
			else
			{
				this -> vie = nouvVie;
			}
		}
	
};
