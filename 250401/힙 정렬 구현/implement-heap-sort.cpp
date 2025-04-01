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
        i = l;
    }
    if(j<=biggest&&arr[j]>arr[i]){
        i = j;
    }

    if(i != big2){
        heapify(biggest,i);
        swap(arr[i],arr[big2]);

    }



    

}

void sort(){

    for(int i = n/2;i>=1;i--){
        heapify(n+1,i);
    }
    
    for(int i = n;i>=1;i--){
        swap(arr[1],arr[i]);
        heapify(i-1,1);
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
