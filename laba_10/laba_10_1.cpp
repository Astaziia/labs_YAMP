#include <iostream>
#include <cmath>
#include <stdexcept>
using namespace std;

double y(double x) {
    const double a = 2.0;

    double denominator = x - a;
    if (denominator == 0)
        throw runtime_error("Division by zero: x - a == 0");

    double value = (x + a) / denominator;
    if (value <= 0)
        throw domain_error("Invalid logarithm argument: <= 0");

    return log(value);
}

/*int main() {
    try {
        double x;
        cout << "Enter x: ";
        cin >> x;

        double result = y(x);
        cout << "y(x) = " << result << endl;

    }
    catch (const domain_error& e) {
        cerr << "Domain error: " << e.what() << endl;
    }
    catch (const runtime_error& e) {
        cerr << "Runtime error: " << e.what() << endl;
    }
    catch (...) {
        cerr << "Unknown error" << endl;
    }

    return 0;
}*/
