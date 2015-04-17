#include "fifo.hpp"
#include <iostream>
Fifo::Fifo(int maxSize /*= 20*/): number(0), wPos(0), rPos(0)
{
    this->maxSize = maxSize;
    this->ptr = new char[this->maxSize]{0}; //initilize with null bytes

}

Fifo::~Fifo()
{
    delete[] this->ptr;
}

int Fifo::push(char c)
{
    if(!Fifo::isFull())
    {
        this->ptr[this->wPos] = c;
        this->number++;
        this->wPos++;

        //ringbuffer
        if (this->wPos == 20)
        {
            this->wPos = 0;
            return 19;
        }
        if(wPos == 0)
        {
            return 0;
        } else {
            return this->wPos -1;
        }
    } else {
        return -1;
    }

}

char Fifo::pop()
{
    if(this->ptr[this->rPos] == '\0')
    {
        return '\0';
    } else {
        char c = this->ptr[this->rPos];
        this->ptr[this->rPos] = '\0';
        this->rPos++;
        this->number--;
        //ringbuffer
        if(this->rPos == 20)
        {
            this->rPos = 0;
        }
        return c;
    }
}

bool Fifo::isEmpty(){
    if(this->number == 0)
    {
        return true;
    } else {
        return false;
    }
}

bool Fifo::isFull(){
    if(this->number == this->maxSize)
    {
        return true;
    } else {
        return false;
    }
}
    

//getters
int Fifo::getWPos()
{
    return this->wPos;
}

int Fifo::getRPos()
{
    return this->rPos;
}
int Fifo::getSize()
{
    return this->number;
}

