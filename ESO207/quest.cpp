#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

inline void push_back_vector(vector<int>& vec, int element) {
    vec.push_back(element);
}

inline int vector_size(const vector<int>& vec) {
    return vec.size();
}

using IntVector = vector<int>;
using IntVectorVector = vector<IntVector>;

IntVectorVector adjacencyList;
IntVector visited;

IntVector singlePath;
IntVectorVector maxPaths;
int numCities, numRoads, numPaths = 0;

void depthFirstSearch(int city, int parent) {
    visited[city] = 1;
    push_back_vector(singlePath, city);
    if (city == numCities) {
        maxPaths[numPaths++] = singlePath;
        return;
    }
    for (auto connectedCity : adjacencyList[city]) {
        if (connectedCity != parent) {
            depthFirstSearch(connectedCity, city);
            singlePath.pop_back();
        }
    }
}

void createAdjacencyList(int numRoads) {
    for (int i = 0; i < numRoads; ++i) {
        int from, to;
        cin >> from >> to;
        adjacencyList[from].push_back(to);
    }
}

void findMaxPaths() {

    cin >> numCities >> numRoads;
    adjacencyList.assign(numCities + 1, IntVector());
    visited.assign(numCities + 1, 0);
    maxPaths.resize(numRoads);

    createAdjacencyList(numRoads);

    depthFirstSearch(1, 0);
    if (!visited[numCities]) {
        cout << "IMPOSSIBLE" << "\n";
        return;
    }

    int maxSize = 0, maxIndex = 0;
    for (int i = 0; i < numPaths; i++) {
        if (vector_size(maxPaths[i]) > maxSize) {
            maxIndex = i;
            maxSize = vector_size(maxPaths[i]);
        }
    }

    cout << maxSize << "\n";
    for (auto city : maxPaths[maxIndex]) {
        cout << city << " ";
    }
    cout << "\n";
}

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int testCases = 1;
    while (testCases--) {
        findMaxPaths();
    }
    return 0;
}
