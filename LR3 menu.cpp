#include <iostream>
#include <cmath> // для использования функции pow
using namespace std;

// Функции для каждого задания
void Task1() {
    cout << "Task 1 selected: Checking A, B, C" << endl;

    // Ввод значень для A, B та C
    double A, B, C;
    cout << "Enter A: ";
    cin >> A;
    cout << "Enter B: ";
    cin >> B;
    cout << "Enter C: ";
    cin >> C;

    // Перевірка умов
    if (A > B && B > C) {
        cout << "A > B > C" << endl;
    }
    else if (A == B && B == C) {
        cout << "A = B = C" << endl;
    }
    else {
        cout << "Other condition" << endl;
    }
}

void Task2() {
    cout << "Task 2 selected: Point location" << endl;

    // Ввод значень для X, Y та R
    double X, Y, R;
    cout << "Enter X: ";
    cin >> X;
    cout << "Enter Y: ";
    cin >> Y;
    cout << "Enter R: ";
    cin >> R;

    // Перевірка, чи знаходиться точка в межах кола радіусу R
    if (pow(X, 2) + pow(Y, 2) <= pow(R, 2)) {
        cout << "Point is within the circle" << endl;
    }
    else {
        cout << "Point is outside the circle" << endl;
    }
}

void Task3() {
    cout << "Task 3 selected: Area and perimeter calculation" << endl;

    // Ввод значень для довжини та ширини
    double length, width;
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter width: ";
    cin >> width;

    // Обчислення площі та периметру
    double area = length * width;
    double perimeter = 2 * (length + width);

    // Вивід результатів
    cout << "Area: " << area << endl;
    cout << "Perimeter: " << perimeter << endl;
}

int main() {
    int choice;

    // Цикл для повторного вывода меню после завершения задачи
    while (true) {
        // Вивід меню для вибору завдання
        cout << "\nSelect task number:" << endl;
        cout << "1. Conditional check of A, B, C" << endl;
        cout << "2. Point location in areas" << endl;
        cout << "3. Area and perimeter calculation" << endl;
        cout << "4. Exit" << endl;
        cout << "Choice: ";
        cin >> choice;

        // Перевірка вибору користувача та виконання відповідного завдання
        switch (choice) {
        case 1:
            Task1();
            break;
        case 2:
            Task2();
            break;
        case 3:
            Task3();
            break;
        case 4:
            cout << "Exiting program." << endl;
            return 0; // завершает программу
        default:
            cout << "Invalid choice! Only 1, 2, 3, or 4" << endl;
            break;
        }
    }
}
