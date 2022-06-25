#include <algorithm>
#include <map>
#include <vector>
#include <string>

using namespace std;

vector<string> FindNamesHistory(const map<int, string>& namesWithYear,
    int year) {
    vector<string> names;
    // ���������� ��� ������� � ��������������� �������
    for (const auto& item : namesWithYear) {
        // ���� ��������� ��� �� ��������� � �������� � ���������� �� �����������,
        if (item.first <= year && (names.empty() || names.back() != item.second)) {
            // ��������� ��� � �������
            names.push_back(item.second);
        }
    }
    return names;
}

string BuildJoinedName(vector<string> names) {
    // ��� ������� � ��� ����������
    if (names.empty()) {
        return "";
    }
    // ������ ������ ��������������� ������� �� ��������
    reverse(begin(names), end(names));

    // �������� ������� ������ ��� � ������ ����������
    string joinName = names[0];

    // ���������� ��� ����������� �����
    for (int i = 1; i < names.size(); ++i) {
        if (i == 1) {
            // ���� ��� ������ ������������� ���, �������� ��� �� ���������� �������
            joinName += " (";
        }
        else {
            // ���� ��� �� ������ ���, �������� �� ����������� �������
            joinName += ", ";
        }
        // � ��������� ��������� ���
        joinName += names[i];
    }

    // ���� � ������� ���� ������ ������ �����, �� ��������� ������ � ������� �
    if (names.size() > 1) {
        joinName += ")";
    }
    // ��� �� ���� �������� ������
    return joinName;
}

// ��. ������� ���������� ������
string BuildFullName(const string& firstName, const string& lastName) {
    if (firstName.empty() && lastName.empty()) {
        return "Incognito";
    }
    else if (firstName.empty()) {
        return lastName + " with unknown first name";
    }
    else if (lastName.empty()) {
        return firstName + " with unknown last name";
    }
    else {
        return firstName + " " + lastName;
    }
}

class Person {
public:
    void ChangeFirstName(int year, const string& firstName) {
        firstNames[year] = firstName;
    }
    void ChangeLastName(int year, const string& lastName) {
        lastNames[year] = lastName;
    }

    string GetFullName(int year) {
        // ����� ������� ��������� ����� � �������
        // � ������ ������ ��� �������, ��� ��� ��� ���������� ������ ��������� ��� � �������, �� ������ �� �� ������������ ������� �������?
        const vector<string> firstNamesHistory = FindFirstNamesHistory(year);
        const vector<string> lastNamesHistory = FindLastNamesHistory(year);

        // ���������� ������ ��� ������� BuildFullName: ������ ��������� ��� � ������� ��� ������� �� �������, ���� ��� ����������
        string firstName;
        string lastName;
        if (!firstNamesHistory.empty()) {
            firstName = firstNamesHistory.back();
        }
        if (!lastNamesHistory.empty()) {
            lastName = lastNamesHistory.back();
        }
        return BuildFullName(firstName, lastName);
    }

    string GetFullNameWithHistory(int year) {
        // ������� ������ ��� �� ���� ��������
        const string firstName = BuildJoinedName(FindFirstNamesHistory(year));
        // ������� ������ ������� �� ���� ��������
        const string lastName = BuildJoinedName(FindLastNamesHistory(year));
        // ��������� �� � ������� ������� �������
        return BuildFullName(firstName, lastName);
    }

private:
    vector<string> FindFirstNamesHistory(int year) {
        return FindNamesHistory(firstNames, year);
    }
    vector<string> FindLastNamesHistory(int year) {
        return FindNamesHistory(lastNames, year);
    }

    map<int, string> firstNames;
    map<int, string> lastNames;
};