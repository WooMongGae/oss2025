#include <iostream>
using namespace std;
int n;
int arr[100];

void select(){
    for(int i = 0;i<n;i++){
        int min = i;
        for(int j = i;j<n;j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
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