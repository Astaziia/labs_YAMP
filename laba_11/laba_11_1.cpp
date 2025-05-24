#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

/*int main() {
    ifstream fin1("input_left.txt"), fin2("input_right.txt");
    ofstream fout("output.txt");

    if (!fin1 || !fin2 || !fout) {
        cout << "File opening error\n";
        return 1;
    }

    int r1, c1, r2, c2;
    fin1 >> r1 >> c1;
    vector<vector<double>> A(r1, vector<double>(c1));
    for (int i = 0; i < r1; ++i)
        for (int j = 0; j < c1; ++j)
            fin1 >> A[i][j];

    fin2 >> r2 >> c2;
    vector<vector<double>> B(r2, vector<double>(c2));
    for (int i = 0; i < r2; ++i)
        for (int j = 0; j < c2; ++j)
            fin2 >> B[i][j];

    if (c1 != r2) {
        cout << "Matrix sizes are incompatible for multiplication\n";
        return 1;
    }

    vector<vector<double>> C(r1, vector<double>(c2));
    for (int i = 0; i < r1; ++i)
        for (int j = 0; j < c2; ++j)
            for (int k = 0; k < c1; ++k)
                C[i][j] += A[i][k] * B[k][j];

    fout << r1 << " " << c2 << endl;
    for (auto& row : C) {
        for (auto& val : row)
            fout << val << "\t";
        fout << endl;
    }

    return 0;
}*/
