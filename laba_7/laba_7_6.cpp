#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*int main() {
    int roadCount;
    cin >> roadCount;

    vector<vector<int>> roads(roadCount);

    for (int i = 0; i < roadCount; ++i) {
        int tunnelCount;
        cin >> tunnelCount;
        roads[i].resize(tunnelCount);
        for (int j = 0; j < tunnelCount; ++j)
            cin >> roads[i][j];
    }

    int bestRoad = 0;
    int maxMinHeight = 0;

    for (int i = 0; i < roads.size(); ++i) {
        int minHeight = *min_element(roads[i].begin(), roads[i].end());
        if (minHeight > maxMinHeight) {
            maxMinHeight = minHeight;
            bestRoad = i + 1;
        }
    }

    cout << bestRoad << " " << maxMinHeight << endl;
    return 0;
}
*/