#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

/*int main() {
    int n, from, to;
    cout << "Enter n: ";
    cin >> n;

    vector<int> v(n);
    iota(v.begin(), v.end(), 1);

    cout << "Enter range (from and to): ";
    cin >> from >> to;

    if (from >= 1 && to <= n && from <= to) {
        int sum = accumulate(v.begin() + from - 1, v.begin() + to, 0);
        cout << "Sum from position " << from << " to " << to << " = " << sum << endl;
    }

    v.erase(remove_if(v.begin(), v.end(), [](int x) { return x % 2 == 0; }), v.end());

    cout << "Vector after removing even numbers: ";
    for (int x : v) cout << x << " ";
    cout << endl;

    return 0;
}*/
