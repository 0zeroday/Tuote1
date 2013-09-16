#include <iostream>
#include <string>
using namespace std;

class tuote  {
private:
	string nimi;
	int maara;
	double ahinta;
public:
	bool Kysy();
	void Tulosta();
	int getMaara(); // palauttaa m‰‰r‰n
	double getAhinta(); // palauttaa tuotteen ‚hinnan
	double getHinta(); // palauttaa kokonaishinnan
	void setMaara(int); // muuttaa tuotteen maaran
};