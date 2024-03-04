#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <math.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    FAST
    string a,b;
    cin >> a >> b; 

    string hi="";

    for(int i=0;i<a.length();i++){
        if(a[i]=='1' && b[i]=='0'){
            hi+='1';
        }
        else if(a[i]=='0' && b[i]=='1'){
            hi+='1';
        }
        else if(a[i]=='0' && b[i]=='0'){
            hi+='0';
        }
        else if(a[i]=='1' && b[i]=='1'){
            hi+='0';
        }
    }
    cout <<hi;
    
    
    return 0;
}