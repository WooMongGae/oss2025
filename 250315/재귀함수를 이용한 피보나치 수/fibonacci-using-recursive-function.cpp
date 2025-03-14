#include <iostream>

using namespace std;

int N;

int f(int n){
    if(n==1||n==2) return 1;

    return f(n-1) + f(n-2);
}

int main() {
    cin >> N;
    cout<<f(N);

    // Please write your code here.

    return 0;
}