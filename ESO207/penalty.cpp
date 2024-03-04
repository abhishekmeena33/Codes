#include <bits/stdc++.h>

using namespace std;

int main(){
    long long t; cin >> t;

    while(t--){
        long long n,k;
        cin >> n >> k;
        
        string s;
        cin >> s;

        vector <char> v;
        
        
        for(int i = 0;i<n;i++){
            
            v.push_back(s[i]);
            if(k==0) continue;
            
            if(v.back() > s[i+1] && k>0){
                k--;
                v.pop_back();
                while(v.back() >s[i+1] && k>0){
                    k--;
                    v.pop_back();
                }
            }
            
        }
        while(k--)v.pop_back();
        
        bool flag=true;
        for(int i = 0; i <v.size(); i++){
            if(v[0]=='0' && flag && v.size()!=1){
                flag=false;
                if(v[i+1]=='0') {flag=true;}
                
                continue;
            }
            cout << v[i];
        }

        cout << "\n";
    }
}