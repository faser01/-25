#include <iostream>
#include <string>

using namespace std;

struct movies {
	string title;
	int year;
	string genre;
	int duration;
	float price;
};

void showMovie(movies& N);

int expensive(movies& N1, movies& N2, movies& N3);

void updateInfo(movies& n);




int main() {
	setlocale(LC_ALL, "Russian");

	movies Venom = { "Веном", 2018, "фантастика", 123 ,97.00 };
	movies Avengers = { "Мстители:_Война_бесконечности", 2018, "фантастика", 115, 93.00 };
	movies Super = { "Суперсемейка", 2004, "анимация", 97, 96.00 };

	//Задача 1
	cout << "Задача 1" << endl;
	showMovie(Venom);
	cout << endl;
	showMovie(Avengers);
	cout << endl;
	showMovie(Super);
	cout << endl;

	//Задача 2
	cout << "Задача 2" << endl;
	cout << "Фильм с самой высокой ценой: " << expensive(Venom, Avengers, Super)  << endl << endl;

	//Задача 3
	cout << "Задача 3" << endl;
	updateInfo(Venom);
	cout << endl;
	cout << "Информация обновлена!!!" << endl;
	showMovie(Venom);


	return 0;
}

void updateInfo(movies& n) {
	cout << "Выберите изменения котороые хотите внести в фильме 'Веном': " << endl;
	cout << "1-> Название фильма: " << endl;
	cout << "2-> Год выхода: " << endl;
	cout << "3-> Жанр: " << endl;
	cout << "4-> Продолжительность:" << endl;
	cout << "5-> Цена Диска: " << endl;

	int x;
	cin >> x;
	cin.ignore();
	switch (x)
	{
	case 1: {cout << "Введите новое название фильма: "; getline(cin, n.title); } break;
	case 2: {cout << "Введите новый год выхода фильма: "; cin >> n.year; } break;
	case 3: {cout << "Введите новый жанр фильма: "; getline(cin, n.genre); } break;
	case 4: {cout << "Введите новую продолжительность фильма: "; cin >> n.duration; } break;
	case 5: {cout << "Введите новую цену диска: "; cin >> n.price; } break;
	}
}

int expensive(movies& N1, movies& N2, movies& N3) {
	if (N1.price > N2.price && N1.price > N3.price)
		return N1.price;
	if (N2.price > N1.price && N2.price > N3.price)
		return N2.price;
	if (N3.price > N1.price && N3.price > N2.price)
		return N3.price;
}

void showMovie(movies& N) {
	cout << "Название фильма  - " << N.title << endl;
	cout << "Год выхода - " << N.year << endl;
	cout << "Жанр - " << N.genre << endl;
	cout << "Продолжительность - " << N.duration  << endl;
	cout << "Цена Диска - " << N.price  << endl;
}
