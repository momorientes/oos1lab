#include "MyData.hpp"

class MyList{
    class MyListElement{
        public:
            MyListElement* next;
            MyData* data;
    };
    private:
        MyListElement *first, *last;
        int size;
    public:
        MyList();
        void push_back(const MyData&);
        void pop_back();
        MyListElement front();
        MyListElement back();
        void clear();
        bool empty();
        int getSize();

};
