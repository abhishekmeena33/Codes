#include <iostream>
using namespace std;

int main() {
    cout << 1 << endl;
    cout << 200000 << " " << 200000 << endl; // Reduced size for testing

    for(int  i=0;i<200000;i++){
      if(i != 199999)cout<<200000<<" ";
      else cout<<200000<<endl;
    }

    for(int  i=0;i<200000;i++){
       if(i !=  199999)cout<<1<<" ";
      else cout<<1<<endl;
    }
}