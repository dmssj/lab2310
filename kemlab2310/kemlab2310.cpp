#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct �������� {
    string ���;
    string ���;
    int ����;
    int ���;
};

int main() {
    setlocale(LC_ALL, "RU");
    vector<��������> ��������� = {
        {"������", "������", 169, 66},
        {"����", "�������", 184, 82},
        {"�������", "��������", 191, 78}
    };

    float ���_����;
    cout << "������� ����������� ����: ";
    cin >> ���_����;

    int ���_���� = 0;
    int ������ = 0;
    int count = 0;
    �������� �����_��� = { "", "", 0, 0 };

    cout << "��������� ���� ������� ��������� " << ���_���� << " ��:\n";

    for (int i = 0; i < ���������.size(); i++) {
        �������� � = ���������[i];
        if (�.���� > ���_����) {
            cout << �.��� << " " << �.���
                << " - ����: " << �.����
                << " ��, ���: " << �.��� << " ��\n";

            ���_���� += �.����;
            ������ += �.���;
            count++;

            if (�.���� > �����_���.����) {
                �����_��� = �;
            }
        }
    }

    if (count > 0) {
        cout << "\n������� ����: " << ���_���� / count << " ��\n";
        cout << "������� ���: " << ������ / count << " ��\n";
        cout << "����� ������� ��������: " << �����_���.��� << " " << �����_���.���
            << " ����: " << �����_���.���� << " ��\n";
    }
    else {
        cout << "��� ����������, ���� ������� ��������� " << ���_���� << " ��.\n";
    }

    return 0;
}
