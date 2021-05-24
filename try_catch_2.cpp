#include <iostream>
using namespace std;

class quest {
public:
	quest();
	void end_quest();
	int stage;
};

quest::quest() {
	stage = 0;
}

void quest::end_quest() {
	if (stage != 0) {
		stage == 90;
		cout << "Квест провален" << endl;
	}
}

class npc {
public:
	npc();
	int health;
};

npc::npc() {
	health = 100;
}

int main() {
	setlocale(0, "rus");
	quest Dricklabrus;
	npc Oldrick;

	Oldrick.health = 0;
	Dricklabrus.stage = 20;

	try {
		if (Oldrick.health == 0 && Dricklabrus.stage == 0) throw - 1;
		else if (Oldrick.health == 0 && Dricklabrus.stage < 100) throw - 2;
		
	}
	catch (int x) {
		if (x == -1) cout << "Квестовый персонаж погиб, связанные с ним квесты будут недоступны." << endl;
		else if (x == -2) {
			cout << "Квестовый персонаж погиб, связанные с ним квесты будут недоступны." << endl;
			Dricklabrus.end_quest();
		}
	}
}
