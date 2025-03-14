#include <iostream>

using namespace std;

int N;

int f(int n){
    if(n==1) return 1;
    if(n==2) return 2;

    return f(n/3)+f(n-1);
}

int main() {
    cin >> N;
    cout<<f(N);

    // Please write your code here.

    return 0;
}