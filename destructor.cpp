#include <iostream>
using namespace std;

class student {
public:
	student(string some_name);
	~student();
	void get_name_1();
	string get_name_2();

private:
	string *name;
};

student::student(string some_name) {
	cout << "Hello from constructor" << endl;
	this->name = new string(some_name);
}

student::~student() {
	cout << "Hello from destructor" << endl;
	delete this->name;
	this->name = 0;
}

void student::get_name_1() {
	cout << "Hello from getter 1" << endl;
	cout << *(this->name) << endl;
}

string student::get_name_2() {
	cout << "Hello from getter 2" << endl;
	return *(this->name);
}

void foo() {
	student first("Vasya");
	first.get_name_1();

	string Vasyas_name;
	Vasyas_name = first.get_name_2();

	cout << "This name is " << Vasyas_name << endl;

}

int main() {
	foo();
	//gghjhj
}
