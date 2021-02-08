#include <iostream>
using namespace std;

int main() {
	/*int var = 0;
	int arr[] { 1, 2, 3, 4, 5 };
	int arr2[5];
	arr2[0] = 1;
	arr2[1] = 2;
	arr2[2] = 3;
	arr2[3] = 4;
	arr2[4] = 5;

	cout << arr[0] << endl;
	cout << arr[1] << endl;
	cout << arr[2] << endl;
	cout << arr[3] << endl;
	cout << arr[4] << endl;
	

	//cout << *(arr + 2) << endl;
	//cout << *(arr + 2) << endl;

	for (int i = 0; i < 5; i += 2) {
		cout << arr2[i] << endl;
	}*/
	string students[] = { "Jamala", "Danial", "Fahur", "Khalia", "Hamud" };
	string students2[] = { "Indian", "Yararat"};
	string winner_name;
	cin >> winner_name;
	while(){
		for (int i = 0; i < 5; i++) {
			if (students[i] == winner_name) {
				cout << "first group" << endl;
			
			}
			else if (students2[i] == winner_name) {
				cout << "second group" << endl;
			
			}
		}
	}


	return 0;
}
