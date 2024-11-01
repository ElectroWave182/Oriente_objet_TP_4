# include <iostream>
# include "Banque.h"

using namespace std;


int main ()
{
	
	Banque malte;
	
	
	// 1)
	
	malte.deposerArgent (20.);
	malte.consulterSolde ();
	
	
	// 2)
	
	cout
		<< malte.retirerArgent (5.)
		<< "\n"
	;
	malte.consulterSolde ();
	
	cout
		<< malte.retirerArgent (2000.)
		<< "\n"
	;
	malte.consulterSolde ();


	return 0;
	
}
