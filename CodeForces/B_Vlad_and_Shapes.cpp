#include <bits/stdc++.h>

using namespace std;
#define ll long long
int main(){
    ll t=1;
    cin >> t;
    
    while(t--){
        ll n;
        cin >> n;
        
        vector <string> str(n);
        
        for(int i=0;i<n;i++){
            cin >> str[i];
        }
        
        
        bool f=true;
        for(int i=0;i<n;i++){
            ll count=0;
            for(int j=0;j<n;j++){
                if(str[i][j]=='1') count++;
            }
            if(count==1) {
                cout << "TRIANGLE\n";
                f=false;
                break;
            }
        }
        if(f) cout << "SQUARE\n";
    
    }
}