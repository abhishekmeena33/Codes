#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <math.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    FAST
    int n; cin >>n ;
    int sum = 0;
    for(int i=0;i<n;i++){
        int temp; cin >>temp; sum += temp;
    }
    cout << (float)sum /n;
    return 0;
}