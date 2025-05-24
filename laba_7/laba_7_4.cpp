#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

/*int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int& x : arr) cin >> x;

    // Среднее арифметическое
    double average = accumulate(arr.begin(), arr.end(), 0.0) / n;
    cout << "Average: " << average << endl;

    // Нижняя медиана
    sort(arr.begin(), arr.end());
    int median = (n % 2 == 0) ? arr[n / 2 - 1] : arr[n / 2];
    cout << "Median: " << median << endl;

    // Минимальная мода (чаще всего встречающийся элемент)
    int min_mode = arr[0], max_count = 1;
    for (int x : arr) {
        int count = count_if(arr.begin(), arr.end(), [x](int y) { return y == x; });
        if (count > max_count || (count == max_count && x < min_mode)) {
            max_count = count;
            min_mode = x;
        }
    }
    cout << "Minimal mode: " << min_mode << endl;

    return 0;
}
*/