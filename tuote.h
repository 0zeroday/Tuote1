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
	int getMaara(); // palauttaa määrän
	double getAhinta(); // palauttaa tuotteen âhinnan
	double getHinta(); // palauttaa kokonaishinnan
	void setMaara(int); // muuttaa tuotteen maaran
};
