#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int good_prefix_count = 0;
        long long prefix_sum = 0;
        
        for (int i = 0; i < n; ++i) {
            prefix_sum += a[i];
            for (int j = 0; j <= i; ++j) {
                if (2 * a[j] == prefix_sum) {
                    good_prefix_count++;
                    break;
                }
            }
        }
        
        cout << good_prefix_count << endl;
    }
    
    return 0;
}
