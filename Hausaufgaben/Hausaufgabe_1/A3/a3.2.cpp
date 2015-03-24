#include <iostream>

using namespace std;
int main() {
    int values[5] = { 0 };
    for(int& value : values)
    {
        cout << "Bitte Zahl eingeben:";
        cin >> value;
        value +=1;
    }

    for(int value : values)
    {
        cout << value << endl;
    }

    return 0;
}
