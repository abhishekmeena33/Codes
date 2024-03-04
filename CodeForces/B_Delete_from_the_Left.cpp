#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <math.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    FAST
    string a,b; cin >> a>> b;
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());

    //cout << a << " " << b << endl;
    int len=b.size();
    if(a.size()>b.size()){
        len = a.size();
    }
    for(int i=0;i<len;i++){
        if(a[i]!=b[i]){
            if(i==0){
                cout <<b.size() +a.size();
                return 0;
            }
            cout << b.size() +a.size() - 2*(i);
            return 0;
        }
    }
    cout << "0";
    return 0;
}