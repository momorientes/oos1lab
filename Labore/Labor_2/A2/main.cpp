#include <iostream>
#include "fifo.hpp"

using namespace std;

int main()
{
    void test_overflow();
    void test_empty_pop();
    void test_ring_push();
    void test_ring_pop();

    cout << "Overflow test: ";
    test_overflow();
    cout << "Empty FiFo pop test: ";
    test_empty_pop();
    cout << "ringbuffer for push test: ";
    test_ring_push();
    cout << "ringbuffer for pop test: ";
    test_ring_pop();


    return 0;
};

/*
 * add 21 elements, pop should give correct first element
 * push functionallity is tested in test_ring_push and is assumed correct
 */
void test_ring_pop()
{
    Fifo f_ring_pop;
    //add 20 elements and pop them
    for(int i = 0; i < 20; i++)
    {
        f_ring_pop.push('a');
        f_ring_pop.pop();
    }
    f_ring_pop.push('x');
    if(f_ring_pop.pop() == 'x')
    {
        cout << "SUCCESS" << endl;
    } else {
        cout << "FAIL" << endl;
    }
}



/*
 * Fifo size is 20, we'll add 21 elements
 */
void test_overflow()
{
    Fifo f_overflow;
    for(int i = 0; i < 20; i++)
    {
        f_overflow.push('a');
    }
    if(f_overflow.push('a') == -1)
    {
        cout << "SUCCESS" << endl;
    } else {
        cout << "FAIL" << endl;
    }
}

/*
 * when maxSize is exceeded but the fifo isn't full a ringbuffer
 * should take place
 */
void test_ring_push()
{
    Fifo f_ring_push;
    //fill the fifo
    for(int i=0; i < 20; i++)
    {
        f_ring_push.push('a');
    }
    //pop first element
    f_ring_push.pop(); 
    //push one more character, ret should be first field in array (index 0)
    if(f_ring_push.push('a') == 0)
    {
        cout << "SUCCESS" << endl;
    } else {
        cout << "FAIL" << endl;
    }
}

/*
 * when the fifo is empty pop should return \0
 */
void test_empty_pop()
{
    Fifo f_empty_pop;
    if(f_empty_pop.pop() == '\0')
    {
        cout << "SUCCESS" << endl;
    } else {
        cout << "FAIL" << endl;
    }
}


