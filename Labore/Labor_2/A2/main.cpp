#include <iostream>
#include "fifo.hpp"

using namespace std;

int main()
{
    Fifo f1;
    cout << boolalpha;
    cout << "isEmpty: " << f1.isEmpty() << endl;
    cout << "isFull: " << f1.isFull() << endl;
    cout << "getWPos: " << f1.getWPos() << endl;
    cout << "getRPos: " << f1.getRPos() << endl;
    cout << "size: " << f1.getSize() << endl;
    f1.push('a');
    cout << "size: " << f1.getSize() << endl;
    cout << "pop: " << f1.pop() << endl;
    cout << "pop2: " << f1.pop() << endl;



    return 0;
};
