#include <iostream>
#include <ctime>
using namespace std;

void happy_number(int &x) {
    x = rand()%9 + 1;
}

int main(){
    cout << "Здравствуйте, уважаемый студент!" << endl\
         << "Вас приветствует супер-интеллектуальный бот СЭЭ-005," << endl\
         << "также известный, как Суеверный Электронный Экзаменатор." << endl\
         << "Вместе мы выберем вам самый счастливый билет, и все обязательно будет хорошо!" << endl << endl;

    cout << "Как вас зовут, дражайший?" << endl;
    cout << "(Наберите в консоли свое имя, фамилию или никнейм, используя латинский алфавит)" << endl;

    string name;
    cin >> name;
    //exit(0);

    cout << endl << "Замечательно! Такое прекрасное имя - уже само по себе хорошая примета!" << endl;
    cout << "В первую очередь, давайте покричим вместе ХАЛЯВА ПРИДИ!" << endl;
    cout << "Вы кричите 'Халява, приди!' ? (y|n)" << endl;
    char answ;
    while (answ != 'y') {
        cin >> answ;
        if (answ == 'y') cout << "ХАЛЯВА, ПРИДИ! ОООООтлично!!!" << endl;
        else cout << "ЧТО?! Почему вы не зовете халяву?! Это обязательно надо сделать!!!" << endl;
        //answ = 'n';
    }

    cout << "А теперь назовите свое любимое число!" << endl;
    int number;
    cin >> number;
    cout << "Замечательное, очень счастливое число!" << endl;
    cout << "Минутку, я  10 секундочек помедитирую над его энергетикой..." << endl;
    for (int i = 0; i <= 10; i++){
        cout << "Омммммм..." << endl;
    }

    cout << "Все чакры раскрыты, и вам обязательно повезет!" << endl;
    cout << "И последнее: сплюньте трижды через левое плечо, скажите 'К черту!' и наберите цифру ноль в консоли:" << endl;
    cout << "Ни пуха ни пера вам, " << name << "!" << endl;
    cout << endl;

    while (number != 0) {
        cin >> number;
        if (number != 0) cout << "Это не ноль, не нарушайте примету!" << endl;
        else {
            happy_number(number);
            cout << "Ваш счастливый номер билета: " << number << endl;
        }
    }
}
