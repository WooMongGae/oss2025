#include <iostream>

using namespace std;

int n;
int arr[100];

int f(int a){
    if( a== 1) return arr[1];
    return max(arr[a],f(a-1));
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