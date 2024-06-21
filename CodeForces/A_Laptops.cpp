#include <bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

void solve(){
    ll n;
    cin >> n;

    vector<pair<ll,ll>> a; // Correct initialization of vector of pairs

    for(int i=0;i<n;i++){
        int temp1,temp2;
        cin >> temp1 >> temp2;
        a.push_back({temp2, temp1}); // Storing second element first for sorting later
    }

    sort(a.begin(), a.end()); // Sorting pairs by their first element

    int mx=-1;

    for(int i=0;i<n;i++){
        if(a[i].second < mx){
            cout << "Happy Alex";
            return;
        }
        mx = max(mx,a[i].second);
    }
    cout << "Poor Alex";
}

int main(){
    FAST
    solve();
    return 0;
}
