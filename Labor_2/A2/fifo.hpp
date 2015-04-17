class Fifo {

    int maxSize, number, wPos, rPos;
    char* ptr;
    public:
        Fifo(): maxSize(20), number(0), wPos(0), rPos(0)
        {
            ptr = new char[maxSize]{0}; //initilize with null bytes

        }

        int push(char c)
        {
            if(!Fifo::isFull())
            {
                ptr[wPos] = c;
                number++;
                wPos++;
                return wPos -1;
//TODO: add ringbuffer
            } else {
                return -1;
            }

        }

        char pop()
        {
//TODO: add ringbuffer
            if(ptr[rPos] == '\0')
            {
                return '\0';
            } else {
                char c = ptr[rPos];
                rPos++;
                return c;
            }
        }

        bool isEmpty(){
            if(number == 0)
            {
                return true;
            } else {
                return false;
            }
        }

        bool isFull(){
            if(number == maxSize)
            {
                return true;
            } else {
                return false;
            }
        }
            

        //getters
        int getWPos()
        {
            return wPos;
        }

        int getRPos()
        {
            return rPos;
        }
        int getSize()
        {
            return number;
        }
};
