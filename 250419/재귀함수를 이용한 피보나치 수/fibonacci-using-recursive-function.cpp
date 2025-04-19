#include <iostream>
using namespace std;

int f(int a){
    if(a==1||a==2) return 1;
    return a+f(a-1);
}

int main(){
    int n;
    cin>>n;
    cout<<f(n);


}