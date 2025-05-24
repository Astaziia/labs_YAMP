#include <iostream>
#include <vector>
using namespace std;

class Polynomial {
private:
    int degree;
    vector<double> coefficients;

public:
    // Конструктор по умолчанию
    Polynomial() {
        degree = 0;
        coefficients.push_back(0.0);
    }

    // Конструктор с параметрами
    Polynomial(int deg, vector<double> coeffs) {
        degree = deg;
        coefficients = coeffs;
    }

    // Геттеры
    int getDegree() {
        return degree;
    }

    vector<double> getCoefficients() {
        return coefficients;
    }

    // Сеттеры
    void setDegree(int d) {
        degree = d;
    }

    void setCoefficients(vector<double> coeffs) {
        coefficients = coeffs;
    }

    // Оператор присваивания
    Polynomial& operator=(const Polynomial& other) {
        degree = other.degree;
        coefficients = other.coefficients;
        return *this;
    }

    // Оператор вывода
    friend ostream& operator<<(ostream& out, const Polynomial& poly) {
        for (int i = poly.degree; i >= 0; i--) {
            if (poly.coefficients[i] != 0) {
                out << poly.coefficients[i];
                if (i > 0) out << "x^" << i;
                if (i > 0) out << " + ";
            }
        }
        return out;
    }

    // Оператор ввода
    friend istream& operator>>(istream& in, Polynomial& poly) {
        in >> poly.degree;
        poly.coefficients.resize(poly.degree + 1);
        for (int i = 0; i <= poly.degree; i++) {
            in >> poly.coefficients[i];
        }
        return in;
    }

    // Сложение с числом (справа)
    Polynomial operator+(double value) {
        Polynomial result = *this;
        result.coefficients[0] += value;
        return result;
    }

    // Сложение с числом (слева)
    friend Polynomial operator+(double value, Polynomial poly) {
        poly.coefficients[0] += value;
        return poly;
    }

    // Операторы сравнения
    bool operator==(const Polynomial& other) {
        return degree == other.degree && coefficients == other.coefficients;
    }

    bool operator!=(const Polynomial& other) {
        return !(*this == other);
    }
};


int main() {
    // Example usage
    Polynomial p1;
    Polynomial p2(4, { 0.0, 0.0, 1.0, 0.0, 2.0 });

    cout << "Enter the degree and coefficients of the polynomial: ";
    Polynomial p3;
    cin >> p3;

    cout << "Polynomial p1: " << p1 << endl;
    cout << "Polynomial p2: " << p2 << endl;
    cout << "Polynomial p3: " << p3 << endl;

    Polynomial p4 = p3;
    cout << "Polynomial p4 (copy of p3): " << p4 << endl;

    Polynomial p5 = p2 + 3.0;
    Polynomial p6 = 3.0 + p2;
    cout << "p2 + 3.0: " << p5 << endl;
    cout << "3.0 + p2: " << p6 << endl;

    cout << "p3 == p4: " << (p3 == p4 ? "Yes" : "No") << endl;
    cout << "p2 != p3: " << (p2 != p3 ? "Yes" : "No") << endl;

    return 0;
}
