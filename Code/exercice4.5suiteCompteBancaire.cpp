# include <iostream>
# include "LivretA.h"

using namespace std;


int main ()
{
	
	// 1)
	
	LivretA panama;
	
	panama.deposerArgent (20.);
	panama.deposerArgent (6000.);
	panama.consulterSolde ();
	
	cout
		<< panama.retirerArgent (5.)
		<< "\n"
	;
	panama.consulterSolde ();
	
	cout
		<< panama.retirerArgent (2000.)
		<< "\n"
	;
	panama.consulterSolde ();


	return 0;
	
}
