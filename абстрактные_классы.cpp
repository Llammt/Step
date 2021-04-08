#include <iostream>
using namespace std;

class Base {
public:
	virtual void setter(int x) = 0;
	void getter() { cout << this->a << endl; };
protected:
	int a;
};

class A : public Base {
public:
	void setter(int x) { this->a = x; }
	
private:
	//int a;
};

class A2 : public Base {
public:
	void setter(int x) { this->a = x + 2; }
private:
	//int a;
};

int main() {
	A first;
	first.setter(5);
	first.getter();

	A2 second;
	second.setter(5);
	second.getter();
}
