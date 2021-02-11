#include <string>
#include <iostream>
#include <ctime>

using namespace std;

int main() {
	int start_time = clock();

	setlocale(0, "rus");
	string massiv[10];
	string name;
	bool Proverka = false;

	cout << "Здравствуйте, введите пожалуйста имена учащихся" << endl;
	for (int i = 0; i < 10; i++) {
		massiv[i] = "qwerty";
	}
	cout << "Отлично, теперь выведем все фамилии для проверки" << endl;
	for (int i = 0; i < 10; i++) {
		cout << massiv[i]<<", ";
	}
	cout<<endl;
	
	cout << "Программа будет искать введеные имена в массиве" << endl;
	name = "asdfgh";
	for (int i = 0; i < 10; i++) {
		 if (name == massiv[i]) {
			Proverka = true;
			break;
		}
	}
	if (Proverka == true) {
			cout << "Отлично, введенное вами имя есть в массиве." << endl;
	}
	else  {
		cout << "Ваше введенное имя не соответствует списку." << endl;
	}/**/

	int end_time = clock();
	int result = end_time - start_time;
	cout << result << endl;

	return 0;
}
