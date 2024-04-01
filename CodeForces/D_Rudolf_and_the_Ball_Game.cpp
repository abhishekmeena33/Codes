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


void solve() {
    ll n, m, x;
    cin >> n >> m >> x;

    set<ll> p_players;
    p_players.insert(x);

    for (int i = 0; i < m; i++) {
        vec u_players;
        ll d;
        char dir;
        cin >> d >> dir;

        if (dir == '?') {
            for (auto p : p_players) {
                u_players.pb((p + d - 1) % n + 1);
                u_players.pb((p - d - 1 + n) % n + 1);
            }
            p_players.clear();
            for (int j = 0; j < u_players.size(); j++) {
                p_players.insert(u_players[j]);
            }
        } 
        else if (dir == '0') {
            for (auto p : p_players) {
                u_players.pb((p + d - 1) % n + 1);
            }
            p_players.clear();
            for (int j = 0; j < u_players.size(); j++) {
                p_players.insert(u_players[j]);
            }
        } 
        else {
            for (auto p : p_players) {
                u_players.pb((p - d - 1 + n) % n + 1);
            }
            p_players.clear();
            for (int j = 0; j < u_players.size(); j++) {
                p_players.insert(u_players[j]);
            }
        }
    }

    cout << p_players.size() << endl;
    for (auto p : p_players) {
        cout << p << " ";
    }

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