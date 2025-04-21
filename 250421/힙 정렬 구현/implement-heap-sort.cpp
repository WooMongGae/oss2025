#include<iostream>
#include <algorithm>
using namespace std;
int n;
int arr[100000];

void heapify(int max,int i){
    int largest = i;
    int a= i*2;
    int b= i*2+1;

    if(a<=max&&arr[largest]<arr[a]){
        largest = a;
    }

    if(b<=max&&arr[largest]<arr[b]){
        largest = b;
    }

    if(largest !=i){
        swap(arr[i],arr[largest]);
        heapify(max,largest);
    }
}

void hip(){
    for(int i = n/2;i>=1;i--){
        heapify(n,i);
    }
    for(int i = n;i>=1;i--){
        swap(arr[i],arr[1]);
        heapify(i-1,1);
    }

}

int main(){
    cin >> n;
    for(int i =1;i<=n;i++){
        cin>>arr[i];
    }

    hip();

    for(int i = 1;i<=n;i++){
        cout<<arr[i]<<" ";
    }



}