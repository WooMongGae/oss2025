#include <iostream>
#include <algorithm>
using namespace std;
int n;
int arr[100000];

void heapify(int n,int i){
    int j = i;
    int a = i*2;
    int b = i*2+1;

    if(a<=n&&arr[j]<arr[a]){
        j = a;
    }

    if(b<=n&&arr[j]<arr[b]){
        j = b;
    }

    if(j!=i){
        swap(arr[j],arr[i]);
        heapify(n,j);
    }
}

void heap(){
    for(int i = n/2;i>=1;i--){
        heapify(n,i);
    }

    for(int i = 1;i<=n;i++){
        swap(arr[i],arr[n-i+1]);
        heapify(n-i,1);
    }
}

int main(){
    cin>>n;
    for(int i = 1;i<=n;i++){
        cin>>arr[i];
    }

    for(int i = 1;i<=n;i++){
        cout<<arr[i]<<" ";
    }

}
