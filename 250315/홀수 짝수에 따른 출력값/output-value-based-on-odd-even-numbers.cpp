#include <iostream>

using namespace std;

int N;

int f(int n){
    if(n==1||n==2) return n;

    if(n%2==0) return n+f(n-2);
    if(n%3==0) return n+f(n-2);
}

int main() {
    cin >> N;
    cout<<f(N);

    // Please write your code here.

    return 0;
}