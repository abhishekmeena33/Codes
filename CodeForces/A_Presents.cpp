#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <math.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    FAST
    int n; cin >> n;
    vector <int> arr(n);
    for(int x=1; x<=n; x++){
        int temp; cin >> temp;
        arr[temp-1] =x;
    }
    for(int x=0; x<n; x++){
        cout << arr[x] << " " ;
    }
    return 0;
}