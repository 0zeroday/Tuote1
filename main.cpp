#include "Tuote.h"
using namespace std;

int _maara;

void testi1(){

	tuote t1;

	t1.Kysy();
	t1.Tulosta();
	t1.setMaara(_maara);
	t1.Tulosta();
}

int main() {

	testi1();

	system("pause");
	return 0;
}
