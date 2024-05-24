#pragma once

class QuadraticEquation {
private:
    double a, b, c;

public:
    // Конструктор
    QuadraticEquation();

    // Метод для решения уравнения
    void solve();

    // Метод для ввода коэффициентов уравнения с проверкой корректности ввода
    void inputCoefficients();
};
