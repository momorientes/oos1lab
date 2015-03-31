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
