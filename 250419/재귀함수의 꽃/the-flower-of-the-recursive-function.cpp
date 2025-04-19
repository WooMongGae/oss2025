#include <iostream>
using namespace std;

void f(int a){
    if(a==0) return;
    cout<<a<<" ";
    f(a-1);
    cout<<a<<" ";


}

int main(){
    int n;
    cin>>n;
    f(n);


}