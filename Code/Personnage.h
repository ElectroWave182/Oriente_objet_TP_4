# include <bits/stdc++.h>
# include <string>

using namespace std;


// 1.2)

class Personnage
{
	
    public: string nom;
	protected: int vie;
	private: string ecriture;
	
	public: Personnage
	(
		string nom,
		int vie
	)
	{
	    this -> nom = nom;
	    this -> vie = vie;
	    this -> ecriture = "";
	}
	
	
	// 2.4)
	
	public: ~ Personnage ()
	{
	    ofstream sortie ("historique" + this -> nom);
		sortie << this -> ecriture << "\n";
		sortie.close ();
		
		cout
			<< "Le joueur "
			<< nom
			<< " vient d'etre détruit.\n"
		;
	}
	
	
	// 1.4)
	
	public: string virtual stat ()
	{
		return
			nom
			+ " -\nPoints de vie : "
			+ to_string (this -> vie)
			+ "\n\n"
		;
	}
	
	
	// 1.7)
	
	public: void operator <<
	(Personnage joueur)
	{
		this -> vie += joueur.vie;
		joueur.vie = 0;
	}
	
	
	// 1.9)
	
	public: void operator & ()
	{
        ecriture += this -> stat ();
	}
	
	
	// 1.8)
	
	public: void operator ++ ()
	{
		this -> vie += 10;
	}
	
	
	// 2.1 et 4.10)
	
	public: void virtual changeVie
	(int nouvVie)
	{
		
		// 2.3)
		
		if (nouvVie < 0)
		{
			wcout << "Attention : la vie d'un personnage ne peut etre negative.\n";
			this -> vie = 0;
		}
		else
		{
			this -> vie = nouvVie;
		}
	}
	
	
	// 4.4)
	
	public: static string trimJump
	(string chainJump)
	{
		uint newLength = chainJump.length () - 1;
		
		if (chainJump [newLength] != '\n')
		{
			cout << "Retranchement d'un caractère différent de '\\n'";
			exit (0);
		}
		
		return chainJump.substr (0, newLength);
	}
	
};
