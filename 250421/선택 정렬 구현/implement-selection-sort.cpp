#include <iostream>
#include <algorithm>
using namespace std;

int n;
int arr[100];

int select(){

    for(int i = 0; i <n;i++){
        int max = i;

        for(int j = i;j<n;j++){
            if(arr[j]<arr[max]){
                max = j;
            }
        }
        swap(arr[i],arr[max]);
    }
}

int main(){
    cin>>n;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    select();
    for(int i = 0;i<n;i++){
        cout<<arr[i];
    }

}