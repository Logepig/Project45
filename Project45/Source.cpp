#include<iostream>
#include<ctime>
#include<string>
#include "Windows.h"

using namespace std;
int init() {;
	return (rand() % 9) + 1;
}

int main() {
	srand(time(NULL));
	int num1;
	int num2;
	int num3;
	int sum;
	int cont;
	int random;
	do {
		system("cls");
		num1 = init();
		num2 = init();
		num3 = init();
		random = init();
		
		if (random % 2 == 1) {
			cout << to_string(num1) + "+" + to_string(num2) + "-" + to_string(num3) + "=" << endl;
			cout << "Your answer?: " << endl;
			cin >> sum;
			if (num1 + num2 - num3 == sum) {
				cout << "Its correct" << endl;
			}
			else {
				cout << "Its incorrect" << endl;
			}
		}
		else {
			cout << to_string(num1) + "-" + to_string(num2) + "+" + to_string(num3) + "=" << endl;
			cout << "Your answer?: " << endl;
			cin >> sum;
			if (num1 - num2 + num3 == sum) {
				cout << "Its correct" << endl;
			}
			else {
				cout << "Its incorrect" << endl;
			}
		}
		Sleep(2000);
		cout << "Should you continue the program? If yes, you may type 1" << endl;
		cin >> cont;
	} while (cont == 1);


	cout << "Thanks for using the programm" << endl;
	return 0;
}
