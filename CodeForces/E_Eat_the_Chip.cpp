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
int digit_sum(int n) {
    int sum = 0;
    while (n>0) {
        sum+=n%10;
        n=n/10;
    }
    return sum;
}
/*===========================================================================================*/

void solve(){
    long long h,w,xa,ya,xb,yb;
        cin>>h>>w>>xa>>ya>>xb>>yb;
        if(xb<=xa){
            cout<<"Draw"<<endl;
            return;
        }
        long long xdif=(xb-xa);
        long long al=xdif/2;
        long long bob=xdif/2;
        if((xdif)%2==0);
        else al++;
        long long ymina=(ya-al);
        if(ymina<=0) ymina=1;
        long long ymaxa=(ya+al);
        if(ymaxa>w) ymaxa=w;
        long long yminb=(yb-bob);
        if(yminb<=0) yminb=1;
        long long ymaxb=(yb+bob);
        if(ymaxb>w) ymaxb=w;
        // cout<<ymina<<yminb<<endl;
        if(al!=bob){
            if(ymaxb>ymaxa || yminb<ymina) cout<<"Draw"<<endl;
            else cout<<"Alice"<<endl;
        }
        else{
            if(ymaxa>ymaxb || ymina<yminb) cout<<"Draw"<<endl;
            else cout<<"Bob"<<endl;
        }

}


int main(){
    FAST
    int t; cin >> t;
    while(t--){
        solve();
        
    }
    return 0;
}