#include<iostream>
using namespace std;
int n;
int arr[100000];

void heapify(int a,int b){
    int large = b;
    int i = b*2;
    int j = b*2+1;
    if(i<=a&&arr[i]>arr[large]){
        large = i;
    }
    
    if(j<=a&&arr[j]>arr[large]){
        large = j;
    }

    if(large !=b){
        swap(arr[large],arr[b]);
        heapify(a,large);
    }
}

void hs(){
    for(int i =n/2;i>=1;i--){
        heapify(n,i);
    }

    for(int i=n;i>=1;i--){
        swap(arr[1],arr[i]);
        heapify(i-1,1);
    }


}

int main(){
    cin>>n;
    for(int i = 1;i<=n;i++){
        cin>>arr[i];
    }

    hs();

    for(int i = 1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
}
