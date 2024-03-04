#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        
        int p[n];
        p[0]=1;
        int max=0;
        for(int i=1;i<n;i++){
            if(arr[i]>arr[i+1]) max=i ;
            if(arr[i]>=arr[i-1] ){
                
                int j=max;
                while(arr[j]<=arr[i] && j>=0){
                    j--;
                }
                p[i]=i-j;
            }
            else p[i]=1; 
        }
        for(int i=0;i<n;i++){
            cout << p[i] << "\n" ;
        }
    }

  return 0;}