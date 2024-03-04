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
    while (n>0) {
        sum+=n%10;
        n=n/10;
    }
    return sum;
}

/*===========================================================================================*/

void solve() {
    ll n, m;
    cin >> n >> m;

    vec c(n);
    scan(c, n);

    vector<vector<ll>> attributes(n, vector<ll>(m));
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < m; j++) {
            cin >> attributes[i][j];
        }
    }

    vec maxAttributes(m, 0);
    for (ll j = 0; j < m; j++) {
        for (ll i = 0; i < n; i++) {
            maxAttributes[j] = max(maxAttributes[j], attributes[i][j]);
        }
    }

    ll maxCost = LLONG_MAX;
    vector<pair<ll, ll>> sortedPokemons;
    for (ll i = 1; i <= n; i++) {
        sortedPokemons.push_back({i, c[i - 1]});
    }

    sort(sortedPokemons.begin(), sortedPokemons.end(), [](const auto& a, const auto& b) {
        return a.second < b.second;
    });

    for (const auto& pokemon : sortedPokemons) {
        ll currentCost = 0;
        for (ll j = 0; j < m; j++) {
            currentCost += max(0LL, maxAttributes[j] - attributes[pokemon.first - 1][j]);
        }
        maxCost = min(maxCost, currentCost + pokemon.second);
    }

    cout << maxCost << endl;
}

int main(){
    FAST
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
