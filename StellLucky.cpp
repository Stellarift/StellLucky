//Задание 1 - угадай число
#include <iostream>
using namespace std;

/*int main() {
	setlocale(LC_ALL, "ru");
	int secret = 345;
	int guess;
	int tries = 0;
	cout << "Я загадал число от 1 до 500. Попробуй его отгадать" << endl;
	cout << "Если надоест, то введи 0 для выхода" << endl;

	while (true) {
		cout << "Твоя догадка: " << endl;
		cin >> guess;
		tries++;

		if (guess == 0) {
			cout << "Выход. Загаданное число было: " << secret << endl;
			break;
		}
		if (guess == secret) {
			cout << "Вы отгадали число с: " << tries << " попытки" << endl;
			break;
		}
		if (guess > secret) {
			cout << "Загаданное число меньше твоего" << endl;
		}
		else {
			cout << "Загаданное число больше чем твое" << endl;
		}

	}
	return 0;
}*/

//Задание 2 - конвертатор валют
int main() {
	setlocale(LC_ALL, "ru");
	int choice;
	double money;
	cout << "Курс: 1 USD = 80 рублей, 1 EURO - 100 рублей " << endl;

	while (true) {
		cout << "1. USD -> RUB " << endl;
		cout << "2. RUB -> USD " << endl;
		cout << "3. EURO -> RUB " << endl;
		cout << "4. RUB -> EURO " << endl;
		cout << "0. Выход " << endl;
		cin >> choice;

		if (choice == 0) {
			cout << "Пока" << endl;
			break;
		}
		if (choice < 1 || choice > 4) {
			cout << "Неверный выбор. Попробуй еще раз " << endl;
			continue;
		}

		cout << "Сколько перевести?: ";
		cin >> money;

		switch (choice) {
		case 1: 
			cout << money << " USD = " << money * 80 << " рублей " << endl;
			break;
		case 2:
			cout << money << " RUB = " << money / 80 << " долларов " << endl;
			break;
		case 3:
			cout << money << " EURO = " << money * 100 << " рублей " << endl;
			break;
		case 4:
			cout << money << " RUB = " << money / 100 << " евро " << endl;
			break;
		}
	}
	return 0;


}