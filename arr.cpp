#include <string>
#include <iostream>

using namespace std;

int main() {
	setlocale(0, "rus");
	string massiv[10];
	string name;
	bool Proverka = false;
	cout << "Здравствуйте, введите пожалуйста имена учащихся" << endl;
	for (int i = 0; i < 10; i++) {
		cin >> massiv[i];
	}
	cout << "Отлично, теперь выведем все фамилии для проверки" << endl;
	for (int i = 0; i < 10; i++) {
		cout << massiv[i]<<", ";
	}
	cout<<endl;

	cout << "Программа будет искать введеные имена в массиве" << endl;
	cin >> name;
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
	}
}
