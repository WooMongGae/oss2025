#include <iostream>
using namespace std;
int n;
int arr[100];

void select(){
    for(int i = 0;i<n;i++){
        int p = i;
        for(int j = i;j<n;j++){
            if(arr[j]<arr[p]){
                p = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[p];
        arr[p] = temp;
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