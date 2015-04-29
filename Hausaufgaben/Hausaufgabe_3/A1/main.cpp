#include <iostream>
#include "ObjectCounter.hpp"

using namespace std;

int main() {
	ObjectCounter o1, o2, o3;
	cout << o1.getId() << " " 
		<< o2.getId() << " "
		<< o3.getId() << endl;
	cout << "maxid: " << o1.getMaxId() << endl;
	cout << "number: " << o2.getNumber() << endl;
	{
		ObjectCounter o4, o5;
		cout << "maxid: " << o4.getMaxId() << endl;
		cout << "number: " << o5.getNumber() << endl;
	}

	cout << "maxid: " << o3.getMaxId() << endl;
	cout << "number: " << o2.getNumber() << endl;
	
	return 0;
}
