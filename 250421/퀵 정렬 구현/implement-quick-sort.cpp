#include <iostream>
#include <algorithm>
using namespace std;

int quick(int l,int h){
    int pivot = h;
    int i = l-1;
    int index = l;

    for(;index<h;index++){
        if(arr[index]<arr[h]){
            i++;
            swap(arr[i],arr[index]);
        }
    }
    swap(arr[i+1],arr[pivot]);
    return i+1;


}

void quicksort(int l,int h){
    if(l<h){

        int index = quick(l,h);
        quicksort(l,index-1);
        quicksort(index+1,h);

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
        cout<<arr[i]<<" ";
    }




}