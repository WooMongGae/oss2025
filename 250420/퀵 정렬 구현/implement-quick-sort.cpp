#include <iostream>
#include <algorithm>
using namespace std;
int n;
int arr[100000];
int p(int l,int h){
    int i = l;
    int j = h;
    int index = l-1;
    
    for(int i = l;i<h;i++){
        if(arr[i]<arr[h]){
            index++;
            swap(arr[i],arr[index]);
        }
    }
    swap(arr[index+1],arr[h]);
    return index+1;
}

void q(int l,int h){
    if(l<h){
        int index = p(l,h);
        q(l,index-1);
        q(index+1,l);
    }else{
        return;
    }
}

int main(){
    cin>>n;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    q(0,n-1);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}