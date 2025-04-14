#include <iostream>

using namespace std;

int N;

void f(int a){
    if(a == 0) return;

    cout<<"HelloWorld"<<endl;

    f(a-1);

}

int main() {
    cin >> N;
    f(N);

    // Please write your code here.

    return 0;
}