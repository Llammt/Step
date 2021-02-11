#include <string>
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
	/**/int start_time = clock();
	

	srand(time(NULL));
	setlocale(0, "rus");
	int arr[10];
	for (int i = 0; i < 10;i++) {
		arr[i] = rand()%10;
		//cout << arr[i] << endl;
	}

	for (int i = 0; i < 10; i++) {
		cout << arr[i] << ", ";
	}
	cout << endl;

	int end_time = clock();
	int result = end_time - start_time;
	cout << result << endl;

	return 0;
}
