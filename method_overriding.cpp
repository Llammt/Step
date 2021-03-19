#include <iostream>
using namespace std;

class A {
public:
	virtual void hello() { cout << "Hello from A" << endl; }
};

class B {
public:
	//void hello_B() { cout << "Hello from B"; }
	void hello() { cout << "Hello from B" << endl; }
};

int main() {
	A aaa;
	aaa.hello();

	B bbb;
	bbb.hello();
}
