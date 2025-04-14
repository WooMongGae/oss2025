#include <iostream>

using namespace std;

int N;

void f(int a){
    for(int i = 0; i<a;i++){
        cout<<"HelloWorld"<<endl;
    }

}

int main() {
    cin >> N;
    f(N);

    // Please write your code here.

    return 0;
}