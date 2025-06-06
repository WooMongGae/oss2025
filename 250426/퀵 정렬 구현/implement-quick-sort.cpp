#include <iostream>
#include <algorithm>
using namespace std;
int n;
int arr[100000];
int quick(int l,int h){
    int pivot = arr[h];
    int i = l-1;
    for(int index = l;index<h;index++){
        if(arr[index]<pivot){
            i++;
            swap(arr[i],arr[index]);
        }
    }
    swap(arr[i+1],arr[h]);
    return i+1;
}

void quicksort(int l,int h){
    if(l<h){
        int m =quick(l,h);
        quicksort(l,m-1);
        quicksort(m+1,h);
    }
}

int main(){
    cin>>n;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    quicksort(0,n-1);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}