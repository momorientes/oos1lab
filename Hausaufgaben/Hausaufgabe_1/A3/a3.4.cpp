#include <iostream>

using namespace std;
int main() {
    int values[5] = { 0 };
    for(int& value : values)
    {
        cout << "Bitte Zahl eingeben: ";
        cin >> value;
    }
    
    int i = 0;
    for(i; i < 4; i++)
    {
        int diff = values[i] - values[i+1];
        cout << "Differenz Wert" << i + 1 << " zu Wert" << i + 2 << ": ";
        cout << diff << endl;
    }

    return 0;
}
