#include <iostream>

using namespace std;
int main() {
    int values[5] = { 0 };
    for(int& value : values)
    {
        cout << "Bitte Zahl eingeben:";
        cin >> value;
    }

    for(int value : values)
    {
        cout << value << endl;
    }

    return 0;
}
