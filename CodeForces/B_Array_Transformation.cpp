#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define vec vector<ll>
#define pb push_back
#define vpi vector <pair<ll ,ll>>
#define mp make_pair
#define bb bool
#define tt true
#define ff false
#define multi multiset<ll>
#define seti set<ll>
#define map map<ll,ll>
#define mod 998244353
#define up upper_bound
#define lb lower_bound
#define dd double
#define all(x) x.begin(),x.end()
#define allr(x) x.rbegin(),x.rend()
ll gcd(ll  a, ll b)
{
if (b == 0)
return a;
return gcd(b, a % b);
}
ll lcm(ll a, ll b)
{
return (a / gcd(a, b)) * b;
}
bb prime(ll n){
if(n<2)return ff;
if(n==2)return tt;
for(ll i =2;i*i<=n;i++){
if(n%i==0)return ff;
}
return tt;
}
ll div(ll n){
for(ll i =2;i*i<=n;i++){
if(n%i==0)return i;
}
return n;
}
void bkl(){
    ll n;
    cin>>n;
    ll a[n];
    ll ans = 1;
    for(int i =0;i<n;i++){
        cin>>a[i];
        ans = lcm(a[i],ans);
    }
    ll c =0;
    for(int i =0;i<n;i++)if(ans!=a[i])c++;
    cout<<c<<endl;
return; 
}
 
int main(){
FAST
ll t = 1;
cin>>t;
while(t--){
bkl();
}
return 0;
}