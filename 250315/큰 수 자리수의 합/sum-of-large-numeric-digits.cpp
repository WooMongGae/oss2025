#include <iostream>

using namespace std;

int a, b, c;

int f(int n){
    if(n<10) return n;


    return n%10 + f(n/10);
}

int main() {
    cin >> a >> b >> c;

    cout<<f(a*b*c);

    // Please write your code here.

    return 0;
}