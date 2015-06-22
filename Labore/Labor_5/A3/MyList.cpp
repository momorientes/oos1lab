#include <iostream>
#include "MyList.hpp"

MyList::MyList()
{
    first = nullptr;
    last = nullptr;
    _size = 0;

}

void MyList::push_back(const MyData& data)
{
	MyList::MyListElement *element = new MyListElement();
    element->data = data.clone();
    element->next = nullptr;
}

MyData& MyList::front() const {
	return *(first->data);
}	

MyData& MyList::back() const {
	return *(last->data);
}	

void MyList::print() const {
	std::cout << "asdfasdf" << std::endl;
}

int MyList::size() const {
	return _size;
}

const MyList MyList::operator+(const MyList& l) const {
	// FIXME:: append...
}
