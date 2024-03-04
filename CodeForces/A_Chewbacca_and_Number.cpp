#include <bits/stdc++.h>
#include <string>
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

    string str;
    cin >> str;
    string hi = "";
    int i=0;
    if(str[0]=='9') {hi+='9';i=1;}
    while(i<str.length()){
        if(str[i]=='0' ) hi+='0';
        else if(str[i] <'5'){
            hi+= str[i];
        }
        
        else {
            hi+= (char)(9-((int)str[i]-48) +48);
        }
        i++;
    }
    bool flag=true ;
    bool flag1=true ;
    for(int i=0; i<hi.length(); i++){
        //if(hi[0]=='0' && flag1) {flag1=false;cout << 9;}
        if(hi[0]=='0' && flag && hi.length()!=1){
            flag=false;
            if(hi[i+1]=='0') {flag=true;}
            
            continue;
        }
        cout << hi[i];
    }
}