#include <iostream>
using namespace std;

class a_class {
public:
	a_class(int x, int y, int z);
	void set_a();
	int get_a();
	void public_add_two();
private:
	int a;
	int b;
	int c;
	void add_two();
};

a_class::a_class(int x = 0, int y = 0, int z = 0)
{
	a = x;
	b = y;
	c = z;
}

void a_class::add_two() {
	a += 2;
}

void a_class::set_a() {
	a = 0;
}

int a_class::get_a() {
	return a;
}

void a_class::public_add_two() {
	add_two();
}

int main() {
	a_class aaa(1, 2, 2);
	//aaa.set_a();
	cout << aaa.get_a() << endl;
	aaa.public_add_two();
	cout << aaa.get_a() << endl;

	a_class bbb;
	cout << bbb.get_a() << endl;
}
