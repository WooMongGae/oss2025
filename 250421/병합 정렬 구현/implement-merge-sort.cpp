#include <iostream>
#include <algorithm>
using namespace std;
int n;
int arr[100000];

void merge(int l,int m,int h){
    int i = l;
    int j = m+1;
    int index = l;
    int new_arr[100000];
    while(i<=m&&j<=h){
        if(arr[i]>arr[j]){
            new_arr[index++]=arr[j++];
        }else{
            new_arr[index++]=arr[i++];
        }
    }

    while(i<=m){
        new_arr[index++] = arr[i++];
    }

    while(j<=h){
        new_arr[index++] = arr[j++];
    }

    for(int p = l;p<=h;p++){
        arr[p] = new_arr[p];
    }
}

void mergesort(int l,int h){
    if(l<h){
        int m =(l+h)/2;
        mergesort(l,m);
        mergesort(m+1,h);
        merge(l,m,h);

    }else{
        return;
    }

}


int main(){
    cin>>n;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    mergesort(0,n-1);

    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}