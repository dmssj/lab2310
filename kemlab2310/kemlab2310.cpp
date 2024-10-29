#include <iostream>     //работа с файлом
#include <vector>
#include <string>

using namespace std;

struct student {
    string fam;
    string name;
    int height;
    int weight;
};

vector<student> string_students() {
    return {
        {"Андрей", "Климов", 169, 66},
        {"Макс", "Максбетов", 184, 82},
        {"Валерий", "Жмышенко", 191, 78}
    };
}
void students_height(vector<student> students, float min_height) {
    int all_height = 0;
    int all_weight = 0;
    int count = 0;
    student very = { "", "", 0, 0 };

    cout << "школьники рост которых превышает " << min_height << " см:\n";

    for (int i = 0; i < students.size(); i++) {
        student a = students[i];
        if (a.height > min_height) {
            cout << a.fam << " " << a.name
                << " - рост: " << a.height
                << " см, вес: " << a.weight << " кг\n";

            all_height += a.height;
            all_weight += a.weight;
            count++;

            if (a.height > very.height) {
                very = a;
            }
        }
    }

    if (count > 0) {
        cout << "\nсредний рост: " << all_height / count << " см\n";
        cout << "средний вес: " << all_weight / count << " кг\n";
        cout << "самый высокий школьник: " << very.fam << " " << very.name
            << " рост: " << very.height << " см\n";
    }
    else {
        cout << "нет школьников, рост которых превышает " << min_height << " см.\n";
    }
}
int main() {
    setlocale(LC_ALL, "RU");

    vector<student> students = string_students();

    float min_height;
    cout << "введите минимальный рост: ";
    cin >> min_height;

    students_height(students, min_height);

    return 0;
}
