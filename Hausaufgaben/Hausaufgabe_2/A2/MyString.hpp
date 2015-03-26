#include <cstring.h>

class MyString
{
	public:
		MyString();
		MyString(const char* cstring);
		MyString(const MyString &myString);
		~Mystring();
		
		void reserve(unsigned int c);
		MyString& append(const MyString& str);
		MyString& assign(const Mystring& str);
		const char* c_str();
		unsigned int size();
		unsigned int capacity();
		void clear();
		bool empty();
		char& at(unsigned int i);
	
	private:
		char* strPtr;
		unsigned int strSize;
		unsigned int strCapacity;
};
