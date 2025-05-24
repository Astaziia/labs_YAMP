#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

struct Point {
    int x, y;

    double distance() const {
        return sqrt(x * x + y * y);
    }
};

/*int main() {
    vector<Point> points(10);

    // ¬вод точек
    cout << "Enter 10 points (x y):" << endl;
    for (auto& p : points) {
        cin >> p.x >> p.y;
    }

    // —ортировка по рассто€нию
    sort(points.begin(), points.end(), [](Point a, Point b) {
        return a.distance() < b.distance();
        });

    cout << "Points sorted by distance: " << endl;
    for (auto& p : points)
        cout << "(" << p.x << ", " << p.y << ") -> " << p.distance() << endl;

    // ”даление точек, удалЄнных более чем на 5
    points.erase(remove_if(points.begin(), points.end(),
        [](Point p) { return p.distance() > 5; }), points.end());

    cout << "Points within 5 units: " << endl;
    for (auto& p : points)
        cout << "(" << p.x << ", " << p.y << ") -> " << p.distance() << endl;

    return 0;
}
*/