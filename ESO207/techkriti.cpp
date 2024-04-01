#include <iostream>
#include <vector>

using namespace std;

#define ll long long

int f = 0;

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivot = arr[high];
        int i = low - 1;

        for (int j = low; j <= high - 1; j++) {
            if (arr[j] < pivot) {
                i++;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i + 1], arr[high]);
        int pi = i + 1;

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void pairQuickSort(pair<int, int> arr[], int low, int high) {
    if (low < high) {
        int pivot = arr[high].first;
        int i = low - 1;

        for (int j = low; j <= high - 1; j++) {
            if (arr[j].first < pivot) {
                i++;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i + 1], arr[high]);
        int pi = i + 1;

        pairQuickSort(arr, low, pi - 1);
        pairQuickSort(arr, pi + 1, high);
    }
}

void quickSortVector(vector<int>& t, int low, int high) {
    if (low < high) {
        int pivot = t[high];
        int i = low - 1;

        for (int j = low; j <= high - 1; j++) {
            if (t[j] < pivot) {
                i++;
                swap(t[i], t[j]);
            }
        }
        swap(t[i + 1], t[high]);
        int pi = i + 1;

        quickSortVector(t, low, pi - 1);
        quickSortVector(t, pi + 1, high);
    }
}

void check(vector<int>& t) {
    quickSortVector(t, 0, t.size() - 1);

    int n = t.size();
    for (int i = 0; i < n - 1; i++) {
        if (t[i] + 1 == t[i + 1]) {
            f = 1;
            break;
        }
    }
}

void solve() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    pair<int, int> p[n];
    for (int i = 0; i < n; i++) {
        p[i].first = a[i];
        p[i].second = i;
    }

    quickSort(a, 0, n - 1);
    pairQuickSort(p, 0, n - 1);

    vector<bool> v(n, false);
    int ans = 0;
    vector<int> t;

    for (int i = 0; i < n; i++) {
        if (v[i] || p[i].second == i)
            continue;

        int c = 0;
        int j = i;

        while (!v[j]) {
            v[j] = true;
            t.push_back(p[j].first);
            j = p[j].second;
            c++;
        }

        if (!f) {
            check(t);
            t.clear();
        }

        if (c > 0) {
            ans += (c - 1);
        }
    }

    if (f)
        cout << ans - 1 << endl;
    else
        cout << ans + 1 << endl;
}

int main() {

    int t;
    cin >> t;
    while (t--) {
        f = 0;
        solve();
    }
    return 0;
}
