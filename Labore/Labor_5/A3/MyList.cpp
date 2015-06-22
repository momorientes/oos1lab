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

void MyList::pop_back() {
	delete last;

	// FIXME
	MyList::MyListElement *tmp = first;
	while (tmp->next)
		tmp = tmp->next;

}

void MyList::clear() {
	// FIXME: clear
}

bool MyList::empty() const {
	return _size > 0;
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
