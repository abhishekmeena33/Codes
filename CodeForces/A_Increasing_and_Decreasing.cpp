#include <iostream>
using namespace std;

void solve(){
    int x,y,n;
    
    cin>> x >> y >> n;
    if(y<=x){
        cout << "-1";
        return;
    }
    
    int arr[n];
    arr[n]=y;
    
    for(int i=n-1;i;i--){
        arr[i]= arr[i+1] -(n-i);
    }
    if(arr[1]<x){
        cout << "-1";
        return;
    }
    arr[1]=x;
    
    for(int i=1;i<=n;i++){
        cout << arr[i]<< " ";
    }
}
int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t;
    
    while(t--){
        solve();
        cout<<"\n";
    }

    return 0;
}