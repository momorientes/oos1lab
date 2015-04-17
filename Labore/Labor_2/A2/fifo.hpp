class Fifo {

    int maxSize, number, wPos, rPos;
    char* ptr;
    public:
        Fifo();
        ~Fifo();

        int push(char c);
        char pop();
        bool isEmpty();
        bool isFull();

        //getters
        int getWPos();
        int getRPos();
        int getSize();
};
