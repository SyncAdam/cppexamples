#include <iostream>
#include "dog.h"

using namespace std;

int main(){

	dog* mydogptr = new dog("Liza", "Keverek");
	dog* yourdogptr = new dog("Tomi", "Nemet-juhasz");

	cout << endl << endl << endl;


	cout << "using arrow member access" << endl;
	cout << mydogptr->getname() << "\t" << mydogptr->getbreed() << "\n";
	cout << yourdogptr->getname() << "\t" << yourdogptr->getbreed() << "\n";

	cout << endl << endl << endl;

	cout << "using dereferencing and the dot operator" << endl;
	cout << (*mydogptr).getname() << "\t" << (*mydogptr).getbreed() << "\n";
	cout << (*yourdogptr).getname() << "\t" << (*yourdogptr).getbreed() << "\n";

	delete mydogptr;
	delete yourdogptr;

	mydogptr = nullptr;
	yourdogptr = nullptr;

	return 0;
}
