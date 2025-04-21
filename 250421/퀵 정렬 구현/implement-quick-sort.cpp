#include <iostream>
#include <algorithm>
using namespace std;

int n;
int arr[100000];

int quick(int l,int h){
    int i = l-1;
    int index = l;
    int pivot = arr[h];

    for(;index <h;index++){
        if(arr[index]<pivot){
            i++;
            swap(arr[i],arr[index]);
        }
    }
    swap(arr[i+1],arr[h]);
    return i+1;
}

void quicksort(int l;int h){
    if(l<h){
        int pos = quick(l,h);
        quicksort(l,pos-1);
        quicksort(pos+1,h);

    }else{
        return;
    }
}

int main(){
    cin>>n;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    quicksort(0,n-1);

    for(int i = 0;i<n;i++){
        cout<<arr[i];
    }

}