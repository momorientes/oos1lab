class Fifo {
    public:
        Fifo(int maxSize=20);
        ~Fifo();

        int push(char c);
        char pop();
        bool isEmpty();
        bool isFull();

        //getters
        int getWPos();
        int getRPos();
        int getSize();
    private:
        int maxSize, number, wPos, rPos;
        char* ptr;
};
