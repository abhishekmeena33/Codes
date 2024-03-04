#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <math.h>
#include <map>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

int digit_sum(int n) {
    int sum = 0;
    while (n>0) {
        sum+=n%10;
        n=n/10;
    }
    return sum;
}
////////////////////////////////////////////////////////////////////////////////////



int main(){
    FAST
    int n,m; cin >> n >> m;
    
    vector<int> v(m);
    for(int i=0;i<m;i++){
        cin >> v[i];
    }
    
    sort(v.begin(),v.end());
    
    if(m==n){
        cout << v[m-1]-v[0];
        return 0;   
    }
    vector <int> dif;

    for(int i=0;i<m-n+1;i++){
        int diff = v[i+n-1]-v[i];
        //cout << v[i+n-1] << "-"<< v[i] <<"\n";
        dif.push_back(diff);
    }
    sort(dif.begin(),dif.end());
    cout << dif[0];
    return 0;
}