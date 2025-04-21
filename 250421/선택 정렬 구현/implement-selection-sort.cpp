#include <iostream>
#include <algorithm>
using namespace std;
int n;
int arr[100];

void select(){
    for(int i = 0;i<n;i++){
        int key = i;
        for(int j = i;j<n;j++){
            if(arr[j]<arr[key]){
                key = j;
            }
        }
        swap(arr[i],arr[key]);
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