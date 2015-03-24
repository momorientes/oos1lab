#include <iostream>
#include <ctime>
using namespace std;
unsigned int groessergleich50 = 0;
unsigned int kleiner50 = 0;

unsigned int& teste( unsigned int wert )
// return lvalue(reference) not integer
{
  if ( wert >= 50 )
    return groessergleich50;
  else
    return kleiner50;
}

int main( void )
{
  int i=0;
  srand( (unsigned)time( NULL ) );
    // Initialisiert den Zufallsgenerator
  while ( i < 100000 )
  {
    (teste( rand() % 100 ) )++;
    i++;
  }
  cout << "Ergebnis der Funktion teste:" << endl;
  cout << "Von "<< i <<" Zahlen zwischen 0 und 99 waren " << endl;
  cout << kleiner50 << " Zahlen zwischen 0 und 49" << endl;
  cout << groessergleich50 << " Zahlen zwischen 50 und 99" << endl;
  return 0;
}
