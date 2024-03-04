#include <iostream>
#include <vector>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

int main(){
    FAST
    int n;cin >> n;

    int arr[n];
    for(int i = 0; i < n;i++){
        cin >> arr[i];
    }

    int L=0,R=n-1;
    int mid;

    bool f=true;
    while(f){
        mid= (L+R)/2;
        if(arr[mid]< arr[mid-1] && arr[mid]< arr[mid+1]){
            f=false;
            cout << arr[mid];
        }
        else if(arr[mid]> arr[mid-1]){
            R=mid-1;
        }
        else if (arr[mid]> arr[mid+1])
        {
            L=mid+1;
            
        }

    }
    return 0;
}