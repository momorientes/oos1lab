// Dateiname: main.cpp
// Autoren: Wolfram Ladurner <wolait01@hs-esslingen.de>
//          Moritz Frenzel <mofrit01@hs-esslingen.de>
// Beschreibung: Program, das den Nutzer fragt, wie viele ganze Zahlen eingelesen werden
//  sollen. Das Program liest dann die gewünschte Anzahl von ganzen Zahlen in ein dynamisches Array
//  ein. Im Anschluss werden alle Zahlen im Array sowie deren Durchschnitt ausgegeben. 
// Datum: 2015/03/22 - 2015/03/22
// Aufwand: 10 Min.
// Modifikationen: 

#include <iostream>
using namespace std;

int main()
{

    int arraysize = 0;

    cout << "Wie viele Zahlen sollen eingegeben werden? ";
    cin >> arraysize;

    int numbers[arraysize] = { 0 };
    float avg = 0;

    for (int &number : numbers )
    {
        cout << "Zahl eingeben: ";
        cin >> number;
        avg += number;
    }

    for (int num : numbers)
    {
        cout << num << endl;
    }
    avg /= arraysize;
    cout << "Durchschnitt: " << avg << endl;


    return 0;
}
