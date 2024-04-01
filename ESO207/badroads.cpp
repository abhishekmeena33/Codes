#include <iostream>
#include <vector>
#include <queue>
using namespace std;

#define ll long long

ll a,b;
vector<ll> c[100005];

vector<ll> d(100005, -1);

ll f(ll g){
if(d[g] < 0) return g;
return d[g] = f(d[g]);
}

void h(ll i, ll j){
i = f(i);
j = f(j);
if(i==j) return;
d[i] = j;
}

void k() {
cin>>a>>b;
while(b--){
ll e,f;
cin >> e >> f;
c[e].push_back(f);
c[f].push_back(e);
}
ll l = 1;
for(ll i = 1; i < a+1; i++){
if(c[i].size() < c[l].size()) l = i;
}

vector<ll> m(a+1,0);
m[l] = 1;
for(auto x : c[l]) m[x] = 1;
for(ll i = 1; i < a+1; i++){
if(!m[i]) h(l,i);
}
for(auto x : c[l]){
vector<ll> n(a+1,0);
n[x] = 1;
for(auto e : c[x]) n[e] = 1;
for(ll i = 1; i < a+1; i++){
if(!n[i]) h(x,i);
}
}
ll o = 0;
for(ll i = 1; i < a+1; i++) o+=(d[i]<0);
cout << (o-1) << '\n';
}

int main() {
ll p; p=1;
while (p--) k();
return 0;
}
