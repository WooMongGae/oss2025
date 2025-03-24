#include <iostream>

using namespace std;

int n;
int arr[100];
int temp;

int f(){
    for(int i = 0;i<n-1;i++){
        for(int j = i;j<n;j++){

            if(arr[i] >arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
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
