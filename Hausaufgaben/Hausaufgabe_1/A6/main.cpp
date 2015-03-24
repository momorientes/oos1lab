#include <iostream>
using namespace std;

int main(void) 
{ 
	int i = 1;
	int & j = i;
	int * ptr;
	ptr = &i;
	cout << "Groesse von i: " << sizeof(i) << endl;
	cout << "Groesse von j: " << sizeof(j) << endl;
	cout << "Groesse von ptr: " << sizeof(ptr) << endl;
	cout << boolalpha;
	cout << "Die Adressen von i und j sind gleich: ";
	cout << (&i == &j) << endl;
	cout << "Die Adressen von j und *ptr sind gleich: ";
	cout << (&j == &(*ptr)) << endl;
	cout << "Die Adressen von j und ptr sind gleich: ";
	cout << (long(&j) == long(&ptr)) << endl;
	return 0;
}
