#include <string>
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
	/**/int start_time = clock();
	int temp = 0;

	srand(time(NULL));
	setlocale(0, "rus");
	int arr[100];
	for (int i = 0; i < 100;i++) {
		arr[i] = rand()%10;
		//cout << arr[i] << endl;
	}

	for (int i = 0; i < 100; i++) {
		cout << arr[i] << ", ";
	}
	cout << endl;

	/*for (int i = 0; i < 10; i++) {
		for (int o = 0; o < 10; o++) {
			if (arr[o] > arr[i]) {
				temp = arr[i];
				arr[o] = arr[i];
				arr[o] = temp;
			}
			else if (arr[o] < arr[i]) {
				temp = arr[o];
				arr[i] = arr[o];
				arr[i] = temp;
				//если что он выводит 88888888 и 9999999999 и 66666666
			}
			else {
				i++;
			}
		}
	}*/

	for (int start = 0; start < 100 - 1; start++) {
		int smol = start;
		for (int real_massiv = start + 1; real_massiv < 100; real_massiv++)
		{
			if (arr[real_massiv] > arr[smol])
				smol = real_massiv;
		}
		temp = arr[start];
		arr[start] = arr[smol];
		arr[smol] = temp;
	}


	for (int i = 0; i < 100; i++) {
		cout << arr[i] << ", ";
	}
	cout << endl;

	int end_time = clock();
	int result = end_time - start_time;
	cout << result << endl;

	return 0;
	//28 26 28 27
	//74 60 57 60 
}
