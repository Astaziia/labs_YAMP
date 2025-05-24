#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

/*int main() {
    srand(time(0));
    int n, m;
    cout << "Matrix size (rows columns): ";
    cin >> n >> m;

    ofstream out("float_matrix.txt");
    out << fixed << setprecision(3);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            double val = -5 + (rand() / (double)RAND_MAX) * 10;
            out << setw(8) << val;
        }
        out << endl;
    }

    return 0;
}
*/