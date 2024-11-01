# include <string>

using namespace std;


class Banque
{
	
    protected:
		
		double solde;
		
		
	public:
	
		Banque ()
		{
			this -> solde = 1000.;
		}
		
		
		// 3.1)
		
		void deposerArgent
		(double montant)
		{
			this -> solde += montant;
		}
		
		
		// 3.2)
		
		bool retirerArgent
		(double montant)
		{
			this -> solde -= montant;
			
			return this -> solde >= 0;
		}
		
		
		// 3.3)
		
		void consulterSolde ()
		{
			cout << this -> solde << "\n";
		}
	
};
