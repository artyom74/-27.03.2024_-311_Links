#include <iostream>
using namespace std;

void swap(int& a, int& b) {

    int temp = a;
    a = b;
    b = temp;
}

int main() {
    setlocale(LC_ALL, "ru");

    int x = 5;
    int y = 10;

    cout << "�� ���������: x = " << x << ", y = " << y << endl;

    swap(x, y);

    cout << "����� ���������: x = " << x << ", y = " << y << endl;

    return 0;
}

/*�������� �������, ������� ������ ��� ���������� �������. */