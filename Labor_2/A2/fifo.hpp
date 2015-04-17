class Fifo {

    int maxSize, number, wPos, rPos;
    char* ptr;
    public:
        Fifo(): maxSize(20), number(0), wPos(0), rPos(0)
        {
            ptr = new char[maxSize];

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
};
