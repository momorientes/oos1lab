#include <iostream>
#include "MyList.hpp"

MyList::MyList()
{
    first = nullptr;
    last = nullptr;
    _size = 0;

}

MyList::MyList(const MyList& list)
{
    first = nullptr;
    last = nullptr;
    _size = 0;
    MyListElement *tmp = list.first;
    do {
        this->push_back(*(tmp->data));
        tmp = tmp->next;
    } while(tmp);
}

void MyList::push_back(const MyData& data)
{
	MyList::MyListElement *element = new MyListElement();
    element->data = data.clone();
    element->next = nullptr;
    if(first == nullptr)
    {
        first = element;
    } else {
        last->next = element;
    }
    last = element;
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
    do {
        MyList::MyListElement *prev = tmp;
        delete prev;
        tmp = tmp->next;
    } while(tmp);
    _size = 0;
    first = nullptr;
    last = nullptr;
}

bool MyList::empty() const {
	return _size == 0;
}

MyData& MyList::front() const {
	return *(first->data);
}	

MyData& MyList::back() const {
	return *(last->data);
}	

void MyList::print() const {
    if(empty()){
        return;
    }
    MyListElement *tmp = first;
    do {
        tmp->data->print();
        tmp = tmp->next;
    } while(tmp);

}

int MyList::size() const {
	return _size;
}

MyList& MyList::operator=(const MyList &list) {
    this->clear();
    MyListElement *tmp = list.first;
    do {
        this->push_back(*(tmp->data));
        tmp = tmp->next;
    } while(tmp);
    return *this;
}

const MyList MyList::operator+(const MyList& l) const {
    MyList *ret = new MyList(*this); 

    MyListElement *tmp = l.first;
    do { 
        ret->push_back(*tmp->data);
        tmp = tmp->next;
    } while(tmp);
    return *ret;
}
