#include<iostream>
#include<ctime>
#include<string>
#include "Windows.h"

using namespace std;
void init(int a) {
	int znak;
	znak = (rand() % 2);
	a = (rand() % 10 - 1) + 1;
	if (znak == 1) {
		a = -a;
	}
}

int main() {
	srand(time(NULL));
	int *num1 = new int;
	int *num2 = new int;
	int *num3 = new int;
	int *sum = new int;
	int cont;
	do {
		system("cls");
		delete num1, num2, num3, sum;
		int *num1 = new int;
		int *num2 = new int;
		int *num3 = new int;
		int *sum = new int;
		init(*num1);
		init(*num2);
		init(*num3);
		cout << to_string(*num1) + "+" + to_string(*num2) + "+" + to_string(*num3) + "=" << endl;
		cout << "Your answer?: " << endl;
		cin >> *sum;
		if (*num1 + *num2 + *num3 == *sum) {
			cout << "Its correct" << endl;
		}
		else {
			cout << "Its incorrect" << endl;
		}
		Sleep(2000);
		cout << "Should you continue the program? If yes, you may type 1" << endl;
		cin >> cont;
	} while(cont == 1);


	cout << "Thanks for using the programm" << endl;
	return 0;
}
