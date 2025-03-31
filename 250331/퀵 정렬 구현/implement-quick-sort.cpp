#include <iostream>

using namespace std;

int n;
int arr[100000];

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int arrange(int low, int high){
    int pivot = arr[high];
    int i = low-1;

    for(int j = low;j<high;j++){
        if(arr[j]<arr[high]){
            i++;
            swap(arr[i],arr[j]);
        }
    }

    swap(arr[i+1],arr[high]);
    return i+1;


}

void divide(int low , int high){
    
    if(low < high){
        int pos = arrange(low,high);

        divide(low,pos-1);
        divide(pos+1,high);
    }

}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    divide(0,n-1);

    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
