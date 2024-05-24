#include "QuadraticEquation.hpp"
#include <iostream>
#include <cmath>

using namespace std;

QuadraticEquation::QuadraticEquation() : a(0), b(0), c(0) {}

// Определение метода для решения уравнения
void QuadraticEquation::solve() {
    if (a == 0){
        cout << "У уравнения один корень: " << -b/a << endl;
    }
    double discriminant = b * b - 4 * a * c;
    double root1, root2;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "У уравнения два корня: " << root1 << " и " << root2 << endl;
    } else if (discriminant == 0) {
        root1 = -b / (2 * a);
        cout << "У уравнения один корень: " << root1 << endl;
    } else {
        cout << "У уравнения нет вещественных корней." << endl;
    }
}

// Определение метода для ввода коэффициентов уравнения с проверкой корректности ввода
void QuadraticEquation::inputCoefficients() {
    while (true) {
        cout << "Введите коэффициенты квадратного уравнения (ax^2 + bx + c = 0):" << endl;
        cout << "a: ";
        cin >> a;
        cout << "b: ";
        cin >> b;
        cout << "c: ";
        cin >> c;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            cout << "Ошибка ввода. Пожалуйста, введите числовые значения." << endl;
        } else {
            break;
        }
    }
}
