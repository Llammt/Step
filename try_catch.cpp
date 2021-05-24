#include <iostream>
using namespace std;

int main() {
	int a;
	cin >> a; //0
	try {
		if (a == 0) throw - 1;
		else if (a == 8) throw string("favorite number");
		cout << "a != 0" << endl;
	}
	catch (int) {
		cout << "a == 0, ERROR" << endl;
		return -1;
	}
	catch (string) {
		cout << "a == 8, it's my favorite number" << endl;
	}
}
