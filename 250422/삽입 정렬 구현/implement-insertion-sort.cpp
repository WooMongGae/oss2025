#include <iostream>
using namespace std;
int n;
int arr[100];
void insert(){
    for(int i = 1;i<n;i++){
        int index = i-1;
        int key = arr[i];
        while(index>=0&&arr[index]>key){
            arr[index+1] = arr[index];
            index--;
        }
        arr[index+1] = key;
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