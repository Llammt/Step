#include <iostream>
using std::cout;
using std::cin;
using std::endl;

const int MAX_USERS = 10; //максимально допустимое количество пользователей в чате

void add_user(int& user_counter);
void delete_user(int& some_counter);

int main() {
    setlocale(LC_ALL, "ru");
    int user_counter = 0; //текущее количество пользователей в чате
    bool again = true;
    while (again) {
        int switch_answ;
        cout << "Please, choose the option: " << endl;
        cout << "1. Add user" << endl;
        cout << "2. Delete user" << endl;
        cout << "3. Exit" << endl;
        cin >> switch_answ;
        switch (switch_answ) {
        case 1:
            add_user(user_counter);
            break;
        case 2:
            delete_user(user_counter);
        case 3:
            again = false;
            break;
        default:
            break;
        }
    }
}

void add_user(int& user_counter) {
    //while (user_counter < 10) { Вам не нужен цикл в этих функциях
        //user_counter++; ЕСЛИ максимальное количество пользователей уже достигнуто, то новый добавлен не будет
       // if (MAX_USERS <= user_counter) {
        if (user_counter >= MAX_USERS) { //более читабельно и более доступно логике простых смертных будет сравнивать переменную с константой, а не наоборот;)
            cout << "Пользователей: " << user_counter << endl;
            cout << "Извините. Регистрации новых пользователя достигла предела и новая регистация не является возможным." << endl;
        }
        //else if (MAX_USERS > user_counter)
        else if (user_counter < MAX_USERS) {
            user_counter++;
            cout << "Пользователей: " << user_counter << endl;
            cout << "Прошла успешная регистрация пользователей." << endl;
        }
    //}
}
void delete_user(int& user_counter) {
    while(user_counter > 0){
        user_counter = 10;
        user_counter = user_counter - 1;
        if (user_counter != 0) {
            cout << "Удаление пользователя прошло успешно." << endl;
            cout << "Пользователей: " << user_counter << endl;
        }
        else if (user_counter == 0) {
            cout << "Ошибка. Больше пользователей удалить нельзя." << endl;
        }

    }
}
