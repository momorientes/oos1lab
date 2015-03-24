#include <iostream>
using namespace std;

char s[4];

char & select(int i, const char & c)
{
	s[i]=c;
	return s[i];
}

int main(void)
{
	select(0, 'a');
	select(1, 'b');
	select(2, 'c');		      //            s[0]  s[1]  s[2]  s[3]
	select(3, 'd');		      // Zustand 1:  a    b     c     d
	select(0, 'A');		      // Zustand 2:  A    b     c     d
	select(0, 'A') = '0';	  // Zustand 3:  0    b     c     d
	select(1, 'B') 
		= select(2, 'C');     // Zustand 4:  0    C     C     d
	select(1, select(2, '2')) 
		= select(3, '3');	  // Zustand 5:  0     3     2     3
    //for(char foo : s) {cout << foo << endl;}
	return 0;
}
