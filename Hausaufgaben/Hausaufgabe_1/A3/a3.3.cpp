#include <iostream>

using namespace std;
int main() {
    int values[5] = { 0 };
    for(int& value : values)
    {
        cout << "Bitte Zahl eingeben:";
        cin >> value;
    }
    
    float avg = 0;
    for(int value : values)
    {
        cout << value << endl;
        avg += value; 
    }

    avg /= 5;
    cout << "Durchschnitt: " << avg << endl;

    return 0;
}
