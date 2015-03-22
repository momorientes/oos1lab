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
