#include <iostream>
using namespace std;
int n;
int arr[100];
void insert(){
    for(int i = 1;i<n;i++){
        int k = arr[i];
        int j = i-1;
        while(j>=0&&arr[j]>k){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = k;
    }
}

int main(){
    cin>>n;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    insert();
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}