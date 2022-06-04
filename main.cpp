#include <iostream>
#include <vector>
#include <array>

using namespace std;

static void DoIt();

int main()
{
	DoIt();
}

static void DoIt()
{
	const vector<int> months =
	{ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	const int lenSize = months.size(); // Кол-во месяцев и дней в них

	int monthCounter = 0; //Индекс текущего месяца

	int count; cin >> count; //Кол-во команд

	vector<vector<string>> month(months[monthCounter]); // Календарь

	for (int i = 0; i < count; ++i)
	{
		string command = ""; cin >> command; // Команды

		if (command == "ADD") // Добавляем
		{
			int day; string task; cin >> day >> task; --day; // элементы вектора нумеруются с нуля
			month[day].push_back(task);
		}

		if (command == "DUMP") // Выводим
		{
			int num = 0; cin >> num; num--; // Число вывода тасков
			cout << month[num].size() << " ";
			for (const auto& x : month[num]) //Вывод каждого таска
			{
				cout << x << " ";
			}
			cout << endl; // Перевод строки
		}

		if (command == "NEXT") // Перейти на следующий месяц
		{
			const int previousLength = months[monthCounter]; // Длина прошлого месяца

			monthCounter = (monthCounter + 1) % lenSize; // Проверка на превышение 12ти месяцев

			const int newLength = months[monthCounter]; // Длина нового месяца

			if (newLength < previousLength) // Новая длина меньше прошлой длины
			{
				for (int day = newLength; day < previousLength; ++day) // Всю херню с отстутствующих дней на последний день нового
				{
					month[newLength - 1].insert(end(month[newLength - 1]),
						begin(month[day]), end(month[day]));
				}
			}
			month.resize(newLength); // Удаляем ненужное
		}
	}
}