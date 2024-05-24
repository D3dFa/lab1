#include <iostream>
#include "QuadraticEquation.hpp"

using namespace std;

int main() {
    // Создание объекта квадратного уравнения
    QuadraticEquation* equation = new QuadraticEquation();

    // Вызов метода для ввода коэффициентов
    equation->inputCoefficients();

    // Вызов метода для решения уравнения
    equation->solve();

    cin;
    delete equation;
    return 0;
}
