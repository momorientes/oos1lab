#include <iostream>

class MyString
{
	public:
		MyString();
		MyString(const char* cstring);
		MyString(const MyString &myString);
		~MyString();
		
		void reserve(unsigned int c);
		MyString& append(const MyString& str);
		MyString& assign(const MyString& str);
		const char* c_str() const;
		unsigned int size() const;
		unsigned int capacity() const;
		void clear();
		bool empty() const;
		char& at(unsigned int i);
		MyString operator+(const MyString& str);
		MyString& operator=(const MyString& str);
		bool operator==(const MyString& str) const;
		char& operator[](int i);

	
	private:
		char* strPtr;
		unsigned int strSize;
		unsigned int strCapacity;
};

std::ostream& operator<<(std::ostream& Stream, const MyString& str);

