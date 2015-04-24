#include <cstring>
#include "MyString.hpp"

MyString::MyString()
{
	strSize = strCapacity = 0;
	strPtr = new char[strCapacity + 1]();
}

MyString::MyString(const char* c_str)
{
	strSize = strCapacity = strlen(c_str);
	strPtr = new char[strCapacity + 1]();
	strncpy(strPtr, c_str, strCapacity);
}

MyString::MyString(const MyString &myString)
{
	strSize = myString.strSize;
	strCapacity = myString.strCapacity;
	strPtr = new char[strCapacity + 1];
	strncpy(strPtr, myString.strPtr, strCapacity);
}

MyString::~MyString()
{
	delete[] strPtr;
}

void MyString::reserve(unsigned int c)
{
	if (c <= strCapacity)
		return;

	char* newPtr = new char[c + 1]();
	strCapacity = c;
	strncpy(newPtr, strPtr, strCapacity);
	delete[] strPtr;
	strPtr = newPtr;
}

MyString& MyString::append(const MyString& str)
{
	reserve(strSize + str.strSize);
	strcat(strPtr, str.strPtr);
	strSize = strSize + str.strSize;
	return *this;
}

MyString& MyString::assign(const MyString& str)
{
	strSize = str.strSize;
	strCapacity = str.strCapacity;
	delete[] strPtr;
	strPtr = new char[strCapacity + 1];
	strncpy(strPtr, str.strPtr, strCapacity);
}

const char* MyString::c_str() const
{
	return (const char*)strPtr;
}

unsigned int MyString::size() const
{
	return strSize;
}

unsigned int MyString::capacity() const
{
	return strCapacity;
}

void MyString::clear()
{
	strncpy(strPtr, "", strCapacity);
	strSize = 0;
}

bool MyString::empty() const
{
	return strSize == 0;
}

char& MyString::at(unsigned int i)
{
	if (i >= strSize)
		return at(0); // FIXME: Aufgabenstellung unklar

	return strPtr[i];
}

// Operatoren +, ==, =, <<
MyString MyString::operator+(const MyString& str) const
{
	MyString res = MyString(*this);
	return res.append(str);
}

bool MyString::operator==(const MyString& str) const
{
	return this->strSize == str.strSize && !strcmp(this->strPtr, str.strPtr);
}

MyString& MyString::operator=(const MyString& str)
{
	return this->assign(str);
}

char& MyString::operator[](int i)
{
	return at(i + 1);
}

std::ostream& operator<<(std::ostream& Stream, const MyString& str)
{
    return Stream << str.c_str();
}

