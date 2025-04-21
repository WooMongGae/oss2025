#include <iostream>
using namespace std;
int n;

int fib(int a){
    if(a==1||a==2) return 1;
    return fib(a-1)+fib(a-2);
}

int main(){
    cin>>n;
    cout<<fib(n);


}