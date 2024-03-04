#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <math.h>
#include <cstdlib>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

bool check(int val){
    int arr[10];
    for(int i = 0; i <10;i++){
        arr[i]=0;
    }
    for(int i=1;i<=4;i++){
        arr[val%10]++;
        val /= 10;
    }
    for(int i=0;i<10;i++){
        if(arr[i]>1){
            return true;
        }
    }
    return false;
}
    

int main(){
    FAST
    int year; cin >> year;
    year++;
    while(check(year)){
        year++;
    }
    cout<<year ;
    return 0;
}