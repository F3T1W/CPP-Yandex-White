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

	const int lenSize = months.size(); // ���-�� ������� � ���� � ���

	int monthCounter = 0; //������ �������� ������

	int count; cin >> count; //���-�� ������

	vector<vector<string>> month(months[monthCounter]); // ���������

	for (int i = 0; i < count; ++i)
	{
		string command = ""; cin >> command; // �������

		if (command == "ADD") // ���������
		{
			int day; string task; cin >> day >> task; --day; // �������� ������� ���������� � ����
			month[day].push_back(task);
		}

		if (command == "DUMP") // �������
		{
			int num = 0; cin >> num; num--; // ����� ������ ������
			cout << month[num].size() << " ";
			for (const auto& x : month[num]) //����� ������� �����
			{
				cout << x << " ";
			}
			cout << endl; // ������� ������
		}

		if (command == "NEXT") // ������� �� ��������� �����
		{
			const int previousLength = months[monthCounter]; // ����� �������� ������

			monthCounter = (monthCounter + 1) % lenSize; // �������� �� ���������� 12�� �������

			const int newLength = months[monthCounter]; // ����� ������ ������

			if (newLength < previousLength) // ����� ����� ������ ������� �����
			{
				for (int day = newLength; day < previousLength; ++day) // ��� ����� � �������������� ���� �� ��������� ���� ������
				{
					month[newLength - 1].insert(end(month[newLength - 1]),
						begin(month[day]), end(month[day]));
				}
			}
			month.resize(newLength); // ������� ��������
		}
	}
}