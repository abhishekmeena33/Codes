#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <math.h>
#include <map>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

int main(){
    FAST
    int n; cin >> n;
    
    vector <int> v(n);

    for(int i = 0; i <n;i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    for(int i = 0; i <n;i++){
        cout <<  v[i] << " ";
    }
    return 0;
}