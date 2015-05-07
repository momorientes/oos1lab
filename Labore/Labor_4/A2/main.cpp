#include <iostream>
#include <string>
using namespace std;

class A {
public:
	void f() {
		cout << "A::f()" << endl;
	}
	void g(double d) {
		cout << "A::g(double)" << endl;
	}
	void g(string s) {
		cout << "A::g(string)" << endl;
	}
	void h(char c) {
		cout << "A::h(char)" << endl;
	}
	void h(string s) {
		cout << "A::h(string)" << endl;
	}
};

class B : public A {
public:
	void g(int i) {
		cout << "B::g(int)" << endl;
	}
	void h(int i) {
		cout << "B::h(int)" << endl;
	}
	void h(string s) {
		cout << "B::h(string)" << endl;
	}
};

int main() {
	A a;
	B b;
	cout << "a.f() "; 
	a.f();    // Überlädt ... Überdeckt ... Redefiniert ...
	cout << "b.f() "; 
	b.f();    // Überlädt ... Überdeckt ... Redefiniert ... 
	cout << "a.g(1.2) "; 
	a.g(1.2); // Überlädt ... Überdeckt ... Redefiniert ... 
	cout << "b.g(1.2) "; 
	b.g(1.2); // Überlädt ... Überdeckt ... Redefiniert ... 
	cout << "a.g(1) "; 
	a.g(1);   // Überlädt ... Überdeckt ... Redefiniert ... 
	cout << "b.g(1) "; 
	b.g(1);   // Überlädt ... Überdeckt ... Redefiniert ... 
	cout << "a.g('a') "; 
	a.g('a'); // Überlädt ... Überdeckt ... Redefiniert ... 
	cout << "b.g('a') "; 
	b.g('a'); // Überlädt ... Überdeckt ... Redefiniert ... 
	cout << "a.g(\"a\") "; 
	a.g("a"); // Überlädt ... Überdeckt ... Redefiniert ... 
	cout << "b.g(\"a\") "; 
	b.g("a"); // Überlädt ... Überdeckt ... Redefiniert ...
	cout << "a.h(1) "; 
	a.h(1);   // Überlädt ... Überdeckt ... Redefiniert ... 
	cout << "b.h(1) "; 
	b.h(1);   // Überlädt ... Überdeckt ... Redefiniert ...
	cout << "a.h('a') "; 
	a.h('a'); // Überlädt ... Überdeckt ... Redefiniert ... 
	cout << "b.h('a') "; 
	b.h('a'); // Überlädt ... Überdeckt ... Redefiniert ...
	cout << "a.h(\"a\") "; 
	a.h("a"); // Überlädt ... Überdeckt ... Redefiniert ... 
	cout << "b.h(\"a\") "; 
	b.h("a"); // Überlädt ... Überdeckt ... Redefiniert ...
	return 0;
}

