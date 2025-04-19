#include <iostream>
using namespace std;

int n;
int arr[100];

void select(){
    for(int i = 0;i<n-1;i++){
        int key = i;
        for(int j = i;j<n;j++){
            if(arr[j]<arr[key]){
                key = j;
            }

        }
        int temp = arr[i];
        arr[i] = arr[key];
        arr[key] = temp;
    }

}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    select();
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    // Please write your code here.

    return 0;
}
