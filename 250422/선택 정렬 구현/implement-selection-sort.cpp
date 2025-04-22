#include <iostream>
using namespace std;
int n;
int arr[100];
void select(){
    for(int i = 0;i<n;i++){
        int key = i;
        for(int j = i;j<n;j++){
            if(arr[key]>arr[j]){
                key = j;
            }
        }
        int temp = arr[key];
        arr[key] = arr[j];
        arr[j] = temp;
    }
}

int main(){
    cin>>n;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    select();
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}