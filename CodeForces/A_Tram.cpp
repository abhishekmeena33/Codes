#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <math.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


int main(){
    FAST
    int t; cin >> t;
    vector <int> arr(t);
    
    for(int i=0; i<t; i++){
        int a, b; 
        cin >> a >> b ;
        arr[i] = b-a;
    }
    vector <int> arr2(t);
    int max=arr[0];
    
    for(int i=0; i<t-1; i++){
        arr2[i] =max;
        max += arr[i+1];
        // cout << max << " ";
    }
    sort(arr2.begin(), arr2.end());
    cout << arr2[t-1];
    return 0;
}