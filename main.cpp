#include <iostream>
#include <string>

using namespace std;

void go() {
    cout << "go" << endl;}
void jump() {
    cout << "jump" << endl;}
void fall() {
    cout << "fall" << endl;}

void action(int &level, int &next_level) {
    if (next_level == level){
        go();
        level = next_level;
    }
    else if (next_level > level) {
        jump();
        level = next_level;
    }
    else {
        fall();
        level = next_level;
    }
}

int main() {
    bool stop = true;
    int health = 10;
    int level = 0, next_level;
    //bool jump = true;

    do {
       cin >> next_level;
       action(level, next_level);
       //level = next_level;

    } while (health > 0);
}
