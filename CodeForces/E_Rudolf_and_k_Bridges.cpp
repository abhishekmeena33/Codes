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
    while (n>0) {
        sum+=n%10;
        n=n/10;
    }
    return sum;
}
/*===========================================================================================*/
ll calcMinChars(vec vals, ll dist) {

if (vals.size() - 2 <= dist) {
return 2;
}
ll res[vals.size()];
res[vals.size() - 1] = 1;
res[0] = 1;
for (int i = 0; i < dist + 1; i++) {
if (vals.size() - 1 - i - 1 >= 1) {
res[vals.size() - i - 2] = vals[vals.size() - i - 2] + 1;
}
}
int l = vals.size() - dist - 2;
int r = vals.size() - 2;
multiset<ll> c;
for (int i = l; i <= r; i++) {
c.insert(res[i]);
}
for (int i = l - 1; i >= 1; i--) {
res[i] = vals[i] + 1 + (*c.begin());
auto it = c.find(res[r]);
c.erase(it);
c.insert(res[i]);
r--;
}
ll minRes = LLONG_MAX;
for (int i = 1; i <= dist + 1; i++) {
minRes = min(minRes, 2 + res[i]);
}
return minRes;
}

void solve() {
ll n, m, k, d;
cin >> n >> m >> k >> d;
vec chars;
for (int i = 0; i < n; i++) {
vec temp(m);
for (int j = 0; j < m; j++) {
cin >> temp[j];
}
ll count = calcMinChars(temp, d);
chars.push_back(count);
}
vec cumulative;
cumulative.push_back(chars[0]);
for (int i = 1; i < n; i++) {
cumulative.push_back(cumulative.back() + chars[i]);
}
ll ans = LLONG_MAX;
for (int i = 0; i < n; i++) {
ll left = i;
ll right = i + k - 1;
if (right <= n - 1) {
if (left == 0) {
ans = min(ans, cumulative[right]);
} else {
ans = min(ans, cumulative[right] - cumulative[left - 1]);
}
}
}
cout << ans;
return;
}


int main(){
    FAST
    int t; cin >> t;
    while(t--){
        solve();
        cout <<"\n";
    }
    return 0;
}                          