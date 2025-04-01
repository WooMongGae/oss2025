#include <iostream>

using namespace std;

int n;
int arr[100001];

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void heapify(int biggest,int big2){
    int i = big2;
    int l = big2*2;
    int j = big2*2+1;

    if(l<=biggest&&arr[l]>arr[i]){
        swap(arr[l],arr[i]);
    }
    if(j<=biggest&&arr[j]>arr[i]){
        swap(arr[j],arr[i]);
    }

    

}

void sort(){

    for(int j = n;j>=1;j--){
        for(int i = j/2;i>=1;i--){
            heapify(j,i);
        }
    
        swap(arr[j],arr[1]);
    

    }
    
}

int main() {
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    sort();

    for(int i = 1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    

    // Please write your code here.

    return 0;
}
