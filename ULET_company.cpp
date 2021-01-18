//программа для авиакомпании "Полный Улет" к домашнему заданию по указателям

#include <iostream>
using std::cout;
using std::endl;
using std::cin;
using std::string;

const int ALA_NQZ = 25000;
const int ALA_FRU = 20000;
const int NQZ_FRU = 40000;
const string username = "qwerty";

int greeting(bool& logged_in){
    string some_username;
    cout << "Авторизоваться? (Нажмите g, чтобы войти как гость)" << endl;
    cin >> some_username;
    if (some_username == username) logged_in = true;
    else logged_in = false;

    cout << "Авиакомпания 'Полный Улет' благодарит Вас за смелость и любовь к экстриму." << endl;
    cout << "Наши направления:" << endl;
    cout << "1. Алматы - Нур-Султан, Нур-Султан - Алматы" << endl;
    cout << "2. Алматы - Бишкек, Бишкек - Алматы" << endl;
    cout << "3. Нур-Султан - Бишкек, Бишкек - Нур-Султан" << endl;
    cout << "Что выбираете?" << endl;
    int choise;
    cin >> choise;
    return choise;
}

int base_cost(int choise) {
    int cost;
    switch (choise) {
    case 1:
        cout << "Стоимость Вашего билета " << ALA_NQZ << " тенге. Спасибо!" << endl;
        cost = ALA_NQZ;
        break;
    case 2:
        cout << "Стоимость Вашего билета " << ALA_FRU << " тенге. Спасибо!" << endl;
        cost = ALA_FRU;
        break;
    case 3:
        cout << "Стоимость Вашего билета " << NQZ_FRU << " тенге. Спасибо!" << endl;
        cost = NQZ_FRU;
        break;
    default:
        break;
    }
    return cost;
}

int final_cost(bool logged_in, int cost) {
    if (logged_in == true){
        cost = (cost/100)*90;
        cout << "Поздравляем! Для Вас у нас есть скидка. Итоговая стоимость Вашего билета равна " << cost << endl;
    }
    return cost;
}

int main() {
    bool logged_in = false;
    int cost;
    char end_programm;
    while(true) {
        int choise = greeting(logged_in);
        cost = base_cost(choise);
        cost = final_cost(logged_in, cost);

        cout << endl << endl;
        cout << "Прошло много времени..." << endl;
        cout << "(Нажмите 'e' для выхода из программы или любой другой символ для продолжения)" << endl;
        cout << endl << endl;
        cin >> end_programm;
        if (end_programm == 'e') break;
    }
}
