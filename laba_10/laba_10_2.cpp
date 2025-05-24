#include <iostream>
#include <vector>
#include <cmath>
#include <stdexcept>
using namespace std;

double mean_geom(const vector<double>& arr) {
    if (arr.empty())
        throw invalid_argument("Array is empty");

    double product = 1.0;
    for (double num : arr) {
        if (num == 0)
            throw domain_error("Zero in array: cannot compute geometric mean");

        if (num < 0)
            throw domain_error("Negative number: cannot take root");

        product *= num;
    }

    return pow(product, 1.0 / arr.size());
}

/*int main() {
    try {
        int n;
        cout << "Enter the number of elements: ";
        cin >> n;

        vector<double> arr(n);
        cout << "Enter " << n << " positive numbers:\n";
        for (int i = 0; i < n; ++i)
            cin >> arr[i];

        double result = mean_geom(arr);
        cout << "Geometric mean: " << result << endl;

    }
    catch (const domain_error& e) {
        cerr << "Domain error: " << e.what() << endl;
    }
    catch (const invalid_argument& e) {
        cerr << "Invalid argument: " << e.what() << endl;
    }
    catch (...) {
        cerr << "Unknown error" << endl;
    }

    return 0;
}
*/