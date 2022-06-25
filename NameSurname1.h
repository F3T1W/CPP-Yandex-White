#include <algorithm>
#include <map>
#include <vector>
#include <string>

using namespace std;

vector<string> FindNamesHistory(const map<int, string>& namesWithYear,
    int year) {
    vector<string> names;
    // перебираем всю историю в хронологическом пор€дке
    for (const auto& item : namesWithYear) {
        // если очередное им€ не относитс€ к будущему и отличаетс€ от предыдущего,
        if (item.first <= year && (names.empty() || names.back() != item.second)) {
            // добавл€ем его в историю
            names.push_back(item.second);
        }
    }
    return names;
}

string BuildJoinedName(vector<string> names) {
    // нет истории Ч им€ неизвестно
    if (names.empty()) {
        return "";
    }
    // мен€ем пр€мой хронологический пор€док на обратный
    reverse(begin(names), end(names));

    // начинаем строить полное им€ с самого последнего
    string joinName = names[0];

    // перебираем все последующие имена
    for (int i = 1; i < names.size(); ++i) {
        if (i == 1) {
            // если это первое Ђисторическоеї им€, отдел€ем его от последнего скобкой
            joinName += " (";
        }
        else {
            // если это не первое им€, отдел€ем от предыдущего зап€той
            joinName += ", ";
        }
        // и добавл€ем очередное им€
        joinName += names[i];
    }

    // если в истории было больше одного имени, мы открывали скобку Ч закроем еЄ
    if (names.size() > 1) {
        joinName += ")";
    }
    // им€ со всей историей готово
    return joinName;
}

// см. решение предыдущей задачи
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
        // найдЄм историю изменений имени и фамилии
        // в данном случае это излишне, так как нам достаточно узнать последние им€ и фамилию, но почему бы не использовать готовые функции?
        const vector<string> firstNamesHistory = FindFirstNamesHistory(year);
        const vector<string> lastNamesHistory = FindLastNamesHistory(year);

        // подготовим данные дл€ функции BuildFullName: возьмЄм последние им€ и фамилию или оставим их пустыми, если они неизвестны
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
        // получим полное им€ со всей историей
        const string firstName = BuildJoinedName(FindFirstNamesHistory(year));
        // получим полную фамилию со всей историей
        const string lastName = BuildJoinedName(FindLastNamesHistory(year));
        // объединим их с помощью готовой функции
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