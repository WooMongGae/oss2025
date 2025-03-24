#include <iostream>

#define MAX_N 100

using namespace std;

int n;
int arr[MAX_N];

int f(){

    for(int i = 1; i<n;i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0&&arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }

    return 0;
    
}



int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    f();
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    // Please write your code here.

    return 0;
}
