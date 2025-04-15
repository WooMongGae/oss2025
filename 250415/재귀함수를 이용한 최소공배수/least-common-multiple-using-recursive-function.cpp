#include <iostream>

using namespace std;

int n;
int arr[10];
int answer = 0;

int gcd(int a , int b){
    if(a%b == 0) return b;
    return gcd(b,a%b);
}

int f(int a){
    if(a==0) return arr[a];

    return gcd(arr[a],f(a-1))*min(arr[a],f(a-1));

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