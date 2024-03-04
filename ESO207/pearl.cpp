#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    
    ll numElements, step;
    ll currentIndex = 0;
    cin >> numElements >> step;

    
    vector<ll> dataVector(numElements);
    iota(dataVector.begin(), dataVector.end(), 1);

    queue<ll> resultOrder;

    while (!dataVector.empty()) {
        currentIndex = (currentIndex + step - 1) % dataVector.size();
        resultOrder.push(dataVector[currentIndex]);
        dataVector.erase(dataVector.begin() + currentIndex);
    }

    while (!resultOrder.empty()) {
        cout << resultOrder.front() << " ";
        resultOrder.pop();
    }

    return 0;
}
