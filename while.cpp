#include <iostream>

int main() {
	setlocale(0, "ru");

	bool trigger = true;
	int password;

	std::cout << "Если хотите увидеть вечную программу, введите четное число" << std::endl;
	std::cin >> password;
	if (password % 2 == 0)
		std::cout << "Верный выбор, наслаждайтесь!" << std::endl;
	else {
		trigger = false;
		std::cout << "Ну вот, теперь вы не увидите вечную программу" << std::endl;
	}



	while (trigger) {
		int answ;

		std::cout << "Эта программа работает вечно..." << std::endl;
		std::cout << "Вы хотите, чтобы эта программа работала вечно?" << std::endl;
		std::cout << "1.Да    2.Нет    3.Не знаю" << std::endl;
		std::cin >> answ;

		switch (answ) {
		case 1:
			std::cout << "Эта программа работает вечно..." << std::endl;
			break;
		case 2:
			std::cout << "Как?! Вам не нравится вечный цикл? Жаль?((" << std::endl;
			trigger = false;
			break;
		default:
			std::cout << "Ну и сиди дальше" << std :: endl;
			break;
		}

	}
		return 0;
}
