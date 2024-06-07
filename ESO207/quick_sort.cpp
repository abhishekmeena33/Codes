#include <iostream>
#include <vector>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

int partition(int arr[], int low , int high){

    int pivot =arr[high];

    int i=low-1;

    for(int j=low;j<=high;j++){
        if(arr[j]<pivot){
            i++;
            int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
        }
    }
    int temp=arr[i+1];
    arr[i+1]=arr[high];
    arr[high]=temp;

    return (i+1);
}
void quick_sort(int arr[],int low, int high){
    
    if(low<high){
        
        int pi=partition(arr,low,high);

        quick_sort(arr,low,pi-1);
        quick_sort(arr,pi+1,high);
    }

}
int main(){
    FAST
    int arr[10];
    for(int i=0;i<10;i++){
        cin >> arr[i];
    }
    quick_sort(arr,0,10);
    for(int i=0;i<10;i++){
        cout << arr[i] <<" ";
    }
    return 0;
}