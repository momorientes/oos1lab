#include "fifo.hpp"
Fifo::Fifo(): maxSize(20), number(0), wPos(0), rPos(0)
{
    ptr = new char[maxSize]{0}; //initilize with null bytes

}

Fifo::~Fifo()
{
    delete[] ptr;
}

int Fifo::push(char c)
{
    if(!Fifo::isFull())
    {
        ptr[wPos] = c;
        number++;
        wPos++;
        //ringbuffer
        if (wPos == 20)
        {
            wPos = 0;
        }
        return wPos -1;
    } else {
        return -1;
    }

}

char Fifo::pop()
{
    if(ptr[rPos] == '\0')
    {
        return '\0';
    } else {
        char c = ptr[rPos];
        rPos++;
        //ringbuffer
        if(rPos == 20)
        {
            rPos = 0;
        }
        return c;
    }
}

bool Fifo::isEmpty(){
    if(number == 0)
    {
        return true;
    } else {
        return false;
    }
}

bool Fifo::isFull(){
    if(number == maxSize)
    {
        return true;
    } else {
        return false;
    }
}
    

//getters
int Fifo::getWPos()
{
    return wPos;
}

int Fifo::getRPos()
{
    return rPos;
}
int Fifo::getSize()
{
    return number;
}

