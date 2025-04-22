#include <iostream>
#include <algorithm>
using namespace std;
int arr[100000];
int n;
void heapify(int max,int i){
    int largest = i;
    int a = i*2+1;
    int b= i*2;
    if(a<=max&&arr[a]>arr[largest]){
        largest = a;
    }
    if(b<=max&&arr[b]>arr[largest]){
        largest = b;
    }
    if(largest!=i){
        swap(arr[largest],arr[i]);
        heapify(max,largest);
    }
}

int hip(){
    for(int i = n/2;i>=1;i--){
        heapify(n,i);
    }
    for(int i = n;i>=2;i--){
        swap(arr[i],arr[1]);
        heapify(i-1,1);
    }
}

int main(){
    cin>>n;
    for(int i = 1;i<=n;i++){
        cin>>arr[i];
    }
    hip();
    for(int i = 1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
}