#include <iostream>
#include <vector>
using namespace std;

// Function to calculate the sum of digits of a number
int digitSum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

// Function to solve the problem
int countNumbers(int l, int r, int k) {
    const int MOD = 1e9 + 7;
    int count = 0;
    for (int n = l; n < r; ++n) {
        if (k * digitSum(n) == digitSum(k * n)) {
            ++count;
        }
    }
    return count % MOD;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int l, r, k;
        cin >> l >> r >> k;
        cout << countNumbers(l, r, k) << endl;
    }
    return 0;
}
