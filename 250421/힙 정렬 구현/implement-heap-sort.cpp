#include<iostream>
#include <algorithm>
using namespace std;

int n;
int arr[100000];

void heapify(int max,int i){
    int largest = i;
    int a=i*2;
    int b=i*2+1;

    if(arr[largest]<arr[a]){
        largest = a;
    }
    if(arr[largest]<arr[b]){
        largest = b;
    }
    if(largest !=i){
        swap(arr[largest],arr[i]);
        heapify(max,largest);
    }

}

void heap(){
    for(int i =n/2;i>=1;i--){
        heapify(n,i);
    }

    for(int i = n;i>=2;i--){
        swap(arr[1],arr[i]);
        heapify(i-1,1);
    }
}

int main(){
    cin>>n;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    heap();
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}