#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <math.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void solve(){
    int n,m;
    cin >> n >> m;
    string str1,str2;
    cin >> str1 >> str2;
    //cout << n << "and"<<m;
    
    char bug;
    bool check = false ;
    for(int i=0;i<n-1;i++){
        if(str1[i]==str1[i+1]){
            check =true;
            bug = str1[i];
            break;
        }
    }
    if(!check){
        cout <<"Yes\n" ;
        return ;
    }
    //cout <<"*"<< bug << "*\n";
    for(int i=0;i<m-1;i++){
        if(str2[i]==str2[i+1]){
            cout <<"No\n" ;
            return;
        }
    }
    if(bug== str2[0] || bug == str2[m-1]){
        cout <<"No\n" ;
        return ;
    }
    cout << "Yes\n";
}

int main(){
    FAST
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}