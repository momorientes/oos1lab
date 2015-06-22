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
    _size++;
}

void MyList::pop_back() {
	MyList::MyListElement *tmp = first;
	while (tmp->next){
        if (tmp->next == last){
            tmp->next = nullptr;
            delete last;
            last = tmp;
        } else {
            tmp = tmp->next;
        }
    }
    _size--;
}

void MyList::clear() {
    MyList::MyListElement *tmp = first;
    while(tmp->next)
    {
        MyList::MyListement *prev = tmp;
        tmp = tmp->next;
        delete prev;
    }
    _size = 0;
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
    MyList ret = new MyList();

}
