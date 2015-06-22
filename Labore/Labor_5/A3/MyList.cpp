#include "MyList.hpp"

MyList::MyList()
{
    first = nullptr;
    last = nullptr;
    size = 0;

}

void MyList::push_back(const MyData& data)
{
    MyListElement *element = new MyListElement();
    element->data = data.clone();
    element->next = nullptr;
}

