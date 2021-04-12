#include <iostream>
using namespace std;

class Base {
public:
	Base(int x);
	~Base();
	Base(const Base& c);
	int *a;
};

Base::Base(int x) {
	this->a = new int(x);
}

Base::~Base() {
	delete a;
	a = 0;
}

Base::Base(const Base& c) {
	cout << "Copy constructor called!" << endl;
	this->a = new int(*(c.a));
}

void test_copy_constr(Base copy) {
	cout << copy.a << endl;
}

int main() {
	Base A(5);
	cout << A.a << endl;
	test_copy_constr(A);
}
