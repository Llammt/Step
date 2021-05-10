#include <iostream>
using namespace std;

class Person {
public:
	Person();
	Person(const Person& c);
	~Person();
	void get_stat();
	int giga();
	int* stat;
private:
	
};

Person::Person()
{
	stat = new int[30];
	for (int i = 0; i < 30; i++) {
		stat[i] = i + 1;
	}
}
Person::Person(const Person& c) {
	
	stat = new int[30];
	for (int i = 0; i < 30; i++) {
		stat[i] = c.stat[i];
	}//profi code
	
}
Person::~Person() {
	delete[] stat;
	stat = 0;
}
void Person::get_stat() {
	for (int i = 0; i < 30; i++) {
		cout << stat[i] << endl;
	}
	
}
int Person::giga() {
	return stat[6];
}
int main()
{
	Person Vova;
	Vova.get_stat();
	int a = Vova.giga();
	cout << a << endl;
	//prooooooooooooooooooooooooooooooooooooo

}
