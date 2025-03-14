#include <iostream>

using namespace std;

int n;

void f(int a){

    if(a==0) return;

    for(int i =0;i!=n-a+1;i++){
        cout<<"*";
    }
    cout<<endl;
    f(a-1);

    
}

int main() {
    cin >> n;
    f(n);

    // Please write your code here.

    return 0;
}