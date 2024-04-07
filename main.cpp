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

    cout << "До изменения: x = " << x << ", y = " << y << endl;

    swap(x, y);

    cout << "После изменения: x = " << x << ", y = " << y << endl;

    return 0;
}

/*Написать функцию, которая меняет две переменные местами. */