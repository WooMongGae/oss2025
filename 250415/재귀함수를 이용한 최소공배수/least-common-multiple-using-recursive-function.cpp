#include <iostream>
#include <algorithm>

using namespace std;

int n;
int arr[10];
int answer = 0;

int gcd(int a , int b){
    if(a%b == 0) return b;
    return gcd(b,a%b);
}

int f(int x){ //f의 역할 : x이하까지의 수들의 최대공약수 구하기
    if(x==0) return arr[x];
    
    return arr[x]*f(x-1)/gcd(arr[x],f(x-1));
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