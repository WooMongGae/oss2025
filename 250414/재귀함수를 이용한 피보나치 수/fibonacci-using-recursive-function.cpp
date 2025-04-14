#include <iostream>

using namespace std;

int N;

int f(int a){
    if(a == 1 || a==2) return 1;
    return f(a-1) + f(a-2);
}

int main() {
    cin >> N;
    cout << f(N);

    // Please write your code here.

    return 0;
}