#include <iostream>
using namespace std;

int f(int i) { 
	cout << "Funktion 1: i=" << i << endl;
	return 0; }

//void f(int i) { cout << "Funktion 2: i=" << i << endl; }
//polymorphismus funktioniert nur mit wechselndem parameter

//char f(int i) { 
//	cout << "Funktion 3: i=" << i << endl;
//	return 'a'; }
//polymorphismus funktioniert nur mit wechselndem parameter

//int f(int & i) { 
//polymorphismus nur mit wechselndem parameter, referenz ist trotzdem int
//	cout << "Funktion 4: i=" << i << endl;
//	return 1; }

int f(int i, int k) { 
	cout << "Funktion 5: i=" << i << " k=" << k << endl;
	return 1; }


int f(char c, int k) { 
	cout << "Funktion 6: c=" << c << " k=" << k << endl;
	return 1; }

//int f(int i, int k=0) { 
//	cout << "Funktion 7: i=" << i << " k=" << k << endl;
//	return 1; }

int f(double d, int i, char c='a') { 
	cout<<"Funktion 8: d="<<d<<" i="<<i<<" c="<<c<<endl;
	return 1; }

int f(double d, double e=1.1, int i=0) { 
	cout<<"Funktion 9: d="<<d<<" e="<<e<<" i="<<i<<endl;
	return 1; }

//int f(double d, double e=1.1, char c) { 
//char c benoetigt standard parameter
//	cout<<"Funktion 10: d="<<d<<" e="<<e<<" c="<<c<< endl;
//	return 1; }

int f(char c, char d, int i=2, char e='c') { 
	cout<<"Funktion 11: c="<<c<<" d="<<d<<" i="<<i<<" e="<<e<<endl;
	return 1;
}

int main(void)
{
	int i = 1;
	char c = 'a';
	f(1);			    // Ausgefuehrte Funktion: 1int f(int i) 
	f(c);			    // Ausgefuehrte Funktion: 1 int f(int i)
	f(i);			    // Ausgefuehrte Funktion: 1 int f(int i)
	c = f('a');		    // Ausgefuehrte Funktion: 1 int f(int i)
	c = 'a';				
	f(1, 2);		    // Ausgefuehrte Funktion: 5 int f(int i, int k)
	f(c, i);		    // Ausgefuehrte Funktion: 6 int f(char c, int k)
	f(1.0, 2.0);	    // Ausgefuehrte Funktion: 9 int f(double d, double e=1.1, int i=0)
	f(1.0, 2.0, 1);	    // Ausgefuehrte Funktion: 9
	f(1.0, 1, 'a');	    // Ausgefuehrte Funktion: 8
	f(1.0, 1);		    // Ausgefuehrte Funktion: 8
	f(1.0, double(i));	// Ausgefuehrte Funktion: 9
	f(c, c, i);		    // Ausgefuehrte Funktion: 11
	f(c, i);			// Ausgefuehrte Funktion: 6
	return 0;
}

