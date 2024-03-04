#include <iostream>
#include <algorithm>
#include <numeric>
#include <string>
#include <vector>
#include <math.h>
#include <map>
#include <iomanip>
#include <stdio.h>

using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define omk cout <<"YES";
#define nah cout <<"NO";
int digit_sum(int n) {
    int sum = 0;
    while (n>0) {
        sum+=n%10;
        n=n/10;
    }
    return sum;
}
/*===========================================================================================*/

int main(){
    FAST
    int n,l; scanf("%d%d",&n,&l);;

    int d=INT_MIN;
    vector <int> v(n);

    for(int i=0; i<n; i++){
        scanf("%d",&v[i]);
    }
    sort(v.begin(), v.end());
    
    d=2*max(v[0],l-v[n-1]);
    
    for(int i=0; i<n-1; i++){
        d=max(d,v[i+1]-v[i]);
    }
    
    printf("%.10f\n",d/2.0); 
    return 0;
}