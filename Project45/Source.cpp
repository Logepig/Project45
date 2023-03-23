#include<iostream>
#include<ctime>
#include<string>
#define DEFAULT 27

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
	do {
		int* num1 = new int[DEFAULT];
		int* num2 = new int[DEFAULT];
		int* num3 = new int[DEFAULT];
		int* sum = new int[DEFAULT];
		init(num1);
		init(num2);
		init(num3);
		cout << to_string(num1) + "+" + to_string(num2) + "+" + to_string(num3) + "=" << endl;
		cin >> sum;
		cout << "It is correct" << endl;
		system("cls");
	} while (num1 + num2 + num3 == sum);
	srand(time(NULL));















	return 0;
}