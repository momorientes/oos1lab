#include "MyData.hpp"

class MyList{
    class MyListElement{
        public:
            MyListElement* next;
            MyData* data;
    };
    private:
        MyListElement *first, *last;
        int _size;
    public:
        MyList();
        MyList(const MyList&);
        void push_back(const MyData&);
        void pop_back();
        MyData& front() const;
        MyData& back() const;
        void clear();
        bool empty() const;
        int size() const;
		void print() const;
		const MyList operator+(const MyList&) const;
        MyList& operator=(const MyList&);

};
