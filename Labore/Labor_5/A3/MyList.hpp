class MyList{
    private:
        MyListElement* first,last;
        int size;
    public:
        void push_back(const MyData&);
        void pop_back();
        MyListElement front();
        MyListElement back();
        void clear();
        bool empty();
        int size();

    class MyListElement{
        private:
            MyListElement* next;
            MyData* data;
    }
}
