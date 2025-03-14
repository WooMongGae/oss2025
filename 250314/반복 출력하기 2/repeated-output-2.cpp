#include <iostream>

using namespace std;

int N;

void f(int n){
    if(n==0) return;

    cout<<"HelloWorld"<<endl;
    f(n-1);

}

int main() {
    cin >> N;
    f(N);

    // Please write your code here.

    return 0;
}