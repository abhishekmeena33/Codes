#include <iostream>
#include <algorithm>
#include <numeric>
#include <string>
#include <vector>
#include <math.h>
#include <map>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define omk cout <<"YES";
#define nah cout <<"NO";
ll digit_sum(ll n) {
    ll sum = 0;
    while (n>0) {
        sum+=n%10;
        n=n/10;
    }
    return sum;
}
/*===========================================================================================*/

void solve(){
        long long n;
        cin>>n;
        vector <long long> hello;
        vector <long long> hello1;
        for(long long i=0;i<n;i++){
            long long temp1,temp2;
            cin>>temp1>>temp2;
            hello.push_back(temp1);
            hello1.push_back(temp2);
        }
        vector <long long> hi;
        long long min=0;
        int max=INT_MAX;
        for(long long i=0;i<n;i++){
            if(hello[i]==3) hi.push_back(hello1[i]);
           else  if(hello[i]==2 && hello1[i]<max) max=hello1[i];
            else if(hello[i]==1 && hello1[i]>min) min=hello1[i];
        }
        
        if(min>max){ cout<<0<<endl;return;}
        int count=0;
        for(long long i=0;i<hi.size();i++){
            if(hi[i]>=min && hi[i]<=max) count++;

        }
        cout<<max-min+1-count<<endl;
}


int main(){
    FAST
    ll t; cin >> t;
    while(t--){
        solve();
        ;
    }
    return 0;
}