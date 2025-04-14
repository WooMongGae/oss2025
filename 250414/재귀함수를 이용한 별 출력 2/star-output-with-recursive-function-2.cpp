#include <iostream>

using namespace std;

int n;

void f(int a){
    if (a == 0) return;
    for(int i = 0;i<a;i++){
        cout<<"* ";
    }
    cout<< endl;
    f(a-1);
    for(int i = 0;i<a;i++){
        cout<<"* ";
    }
    cout<< endl;
}

int main() {
    cin >> n;
    f(n);

    // Please write your code here.

    return 0;
}