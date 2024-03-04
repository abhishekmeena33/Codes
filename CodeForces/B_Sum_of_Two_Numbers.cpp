#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <math.h>
#include <map>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

int digit_sum(int n) {
    int sum = 0;
    while (n>0) {
        sum+=n%10;
        n=n/10;
    }
    return sum;
}
////////////////////////////////////////////////////////////////////////////////////


void solve(){
    int n; cin >> n;//19

    if(n==1){
        cout << "1 0\n";
        return;
    }
    int high =n-1;//18
    int low = 1;
    while(high>=low ){//true
        int mid =(high+low)/2;//4
        int x=mid ;//4
        int y=n-mid ;//15
        int diff = abs(digit_sum(x)-digit_sum(y));//2
        if(diff==0 || diff==1){//f
            cout << x << " " << y << "\n" ;
            return;
        }
        else if(digit_sum(x)-digit_sum(y)>0){
            high=mid-1;//8
        }
        else{
            low=mid+1;//1
        }
    }
}

int main(){
    FAST
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}