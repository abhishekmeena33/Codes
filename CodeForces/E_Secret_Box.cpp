//░██████╗░█████╗░███╗░░░███╗░██████╗░█████╗░███╗░░░███╗██╗░░░██╗██████╗░░█████╗░██╗██████╗░██████╗░
//██╔════╝██╔══██╗████╗░████║██╔════╝██╔══██╗████╗░████║██║░░░██║██╔══██╗██╔══██╗██║╚════██╗╚════██╗
//╚█████╗░███████║██╔████╔██║╚█████╗░███████║██╔████╔██║██║░░░██║██████╔╝███████║██║░█████╔╝░█████╔╝
//░╚═══██╗██╔══██║██║╚██╔╝██║░╚═══██╗██╔══██║██║╚██╔╝██║██║░░░██║██╔══██╗██╔══██║██║░╚═══██╗░╚═══██╗
//██████╔╝██║░░██║██║░╚═╝░██║██████╔╝██║░░██║██║░╚═╝░██║╚██████╔╝██║░░██║██║░░██║██║██████╔╝██████╔╝
//╚═════╝░╚═╝░░╚═╝╚═╝░░░░░╚═╝╚═════╝░╚═╝░░╚═╝╚═╝░░░░░╚═╝░╚═════╝░╚═╝░░╚═╝╚═╝░░╚═╝╚═╝╚═════╝░╚═════╝░
#include <bits/stdc++.h>
#include <string>
#include <set>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define vec vector<ll>
#define pb push_back
#define vecpair vector <pair<ll ,ll>>
#define mp make_pair
#define map map<ll,ll>
#define dd double
#define bb bool
#define ff false
#define tt true
#define all(x) x.begin(), x.end()
#define scan(x,n) for(ll i = 0; i < n; i++) cin >> x[i];

int digit_sum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n = n / 10;
    }
    return sum;
}
/*===========================================================================================*/

void solve() {
    ll x, y, z, k;
    cin >> x >> y >> z >> k;
    ll count = 0;

    
    for (ll a = 1; a * a * a <= k; ++a) {
        if (k % a != 0) continue;
        ll r1 = k / a;
        for (ll b = 1; b * b <= r1; ++b) {
            if (r1 % b != 0) continue;
            ll c = r1 / b;
            if (a <= x && b <= y && c <= z) {
                count = max(count, (x - a + 1) * (y - b + 1) * (z - c + 1));
            }
            if (a <= x && c <= y && b <= z) {
                count = max(count, (x - a + 1) * (y - c + 1) * (z - b + 1));
            }
            if (b <= x && a <= y && c <= z) {
                count = max(count, (x - b + 1) * (y - a + 1) * (z - c + 1));
            }
            if (b <= x && c <= y && a <= z) {
                count = max(count, (x - b + 1) * (y - c + 1) * (z - a + 1));
            }
            if (c <= x && a <= y && b <= z) {
                count = max(count, (x - c + 1) * (y - a + 1) * (z - b + 1));
            }
            if (c <= x && b <= y && a <= z) {
                count = max(count, (x - c + 1) * (y - b + 1) * (z - a + 1));
            }
        }
    }

    cout << count;
}

int32_t main() {
    FAST
    int t; 
    cin >> t;
    while (t--) {
        solve();
        cout << "\n";
    }
    return 0;
}
