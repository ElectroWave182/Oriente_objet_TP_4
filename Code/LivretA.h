# include <bits/stdc++.h>
# include <cmath>
# include "Banque.h"

using namespace std;


class LivretA:
public Banque
{
	
	// 5.1)
	
    private:
	
		// 5.2)
		
		double plafond;
		
		
	public:
	
		LivretA ():
			Banque ()
		{
			this -> plafond = 5000.;
		}
		
		void deposerArgent
		(double montant)
		{
			if (this -> solde + montant > this -> plafond)
			{
				cout
					<< "Plafond de "
					<< to_string (int (this -> plafond))
					<< " € atteint.\n"
				;
			}
			else
			{
				Banque:: deposerArgent (montant);
			}
		}
	
};
