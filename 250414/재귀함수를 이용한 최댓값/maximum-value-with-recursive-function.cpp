#include <iostream>

using namespace std;

int n;
int arr[100];

int f(int a){
    if( a == 0) return arr[0];
    return max(arr[a],f(a));
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout<<f(n-1);
    
    // Please write your code here.

    return 0;
}