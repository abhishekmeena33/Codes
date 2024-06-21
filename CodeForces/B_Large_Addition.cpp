#include <iostream>
#include <cmath>
using namespace std;

bool isLarge(int x) {
    while (x > 0) {
        int digit = x % 10;
        if (digit < 5) {
            return false;
        }
        x /= 10;
    }
    return true;
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        long long x;
        cin >> x;

        if(x%10 == 9){cout << "NO\n";}
        else if(x%10==1){cout << "YES\n";}
        else{
            int digits = log10(x) + 1;

            bool possible = false;
            int med = x/2;
            for (int i = med; i <= med + 100; ++i) {
                
                long long b = x - i;
                int digits1 = log10(b) + 1;
                int digits2 = log10(i) + 1;
                if (isLarge(b) && b > 0 && digits1==digits2) {
                    possible = true;
                    break;
                }
            }

            if (possible) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }
}

int main() {
    solve();
    return 0;
}
