#include "Tuote.h"
#include <string>
#include <iostream>
#include <typeinfo>
using namespace std;

bool tuote::Kysy() {
	cout << "Tuote : " ; 
	getline(cin, nimi);
	if (nimi == "")
		return false;

	cout << "Yksikkohinta : " ;
	cin >> ahinta;

	cout << "Maara : " ;
	cin >> maara;
	return true;
};

void tuote::Tulosta() {
	cout <<"\n"<< "nimi" << "\t" << "ahinta" << "\t" << "maara" << "\n" << endl;
	cout << nimi << "\t" << ahinta << "\t" << maara << "\n" << endl;

};

double tuote::getAhinta(){
	return ahinta;
};

double tuote::getHinta(){
	return maara * ahinta;
};

int tuote::getMaara() {
	return maara ;
};

void tuote::setMaara(int _maara){
	cout << "Anna korjattu maara : "; cin >> _maara;
	if (typeid(_maara).name() != typeid(maara).name()) {
		_maara = 0; }
	maara = _maara;
};
