#include <bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define vec vector<ll>
#define pb push_back
#define vpi vector <pair<ll ,ll>>
#define mp make_pair
#define map map<ll,ll>
#define dd double
#define bb bool
#define ff false
#define tt true

int digit_sum(int n) {
    int sum = 0;
    while (n>0) {
        sum+=n%10;
        n=n/10;
    }
    return sum;
}
ll gcd(ll  a, ll b)
{
    if (b == 0)
    return a;
    return gcd(b, a % b);
}

/*===========================================================================================*/

void solve(){
    ll x,n; cin >> x>>n;

    ll ms = n;

	ll i = sqrt(x);
	ll res = 1;
	while (i >= 1) {

		
		if (x % i == 0) {
			if (i >= ms)
				res = max(res, x / i);

			if (x / i >= ms)
				res = max(res, i);
		}
		i--;
	}

	cout<< res;
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