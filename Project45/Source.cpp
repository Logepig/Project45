#include<iostream>
#include<ctime>
#include<string>

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
	int num1, num2, num3;
	int sum;
	do {
		init(num1);
		init(num2);
		init(num3);
		cout << to_string(num1) + "+" + to_string(num2) + "+" + to_string(num3) + "=" << endl;
		cin >> sum;
		cout << "It is correct" << endl;
		system("cls");
	} while (num1 + num2 + num3 == sum);















	return 0;
}