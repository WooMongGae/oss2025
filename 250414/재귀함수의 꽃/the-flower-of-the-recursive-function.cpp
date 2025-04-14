#include <iostream>

using namespace std;

int N;

void f(int a){
    cout<<a<<" ";
    f(a-1);
    cout<<a<<" ";


}

int main() {
    cin >> N;

    // Please write your code here.

    return 0;
}