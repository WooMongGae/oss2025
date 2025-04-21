#include <iostream>
using namespace std;
int n;

void star(int a){
    if(a==0) return;
    cout<<a<<" ";
    star(a-1);
    cout<<a<<" ";
}

int main(){
    cin>>n;
    star(n);
}