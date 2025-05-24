#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int& x : arr) cin >> x;

    vector<int> positives;
    for (int x : arr) if (x > 0) positives.push_back(x);

    if (positives.empty()) {
        cout << 0 << endl;
    }
    else {
        cout << *min_element(positives.begin(), positives.end()) << " ";
        cout << *max_element(positives.begin(), positives.end()) << endl;
    }

    return 0;
}
*/