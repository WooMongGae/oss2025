#include <iostream>

using namespace std;

int n;
int arr[100];

int f(int a){
    if( a == 0) return arr[0];
    return max(arr[a-1],f(a-2));
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout<<f(n);
    
    // Please write your code here.

    return 0;
}