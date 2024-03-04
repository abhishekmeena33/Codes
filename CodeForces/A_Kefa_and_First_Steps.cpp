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
    vector <int> max;

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    int sum =1;
    for(int i = 0; i < n-1; i++){
        if(v[i] <= v[i+1]){
            sum++;
        }
        else if(v[i] > v[i+1] && (sum!=0)){
            max.push_back(sum);
            sum=1;
        }
    }
    max.push_back(sum);
    // for(int i = 0; i < max.size(); i++){
    //     cout << max[i] << " ";
    // }
    sort(max.begin(), max.end());
    reverse(max.begin(), max.end());
    cout << max[0];
    return 0;
}