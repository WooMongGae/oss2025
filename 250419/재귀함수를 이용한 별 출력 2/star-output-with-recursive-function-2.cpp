#include <iostream>
using namespace std;

void f(int a){
    if(a==0)return;
    for(int i = 0;i<a;i++){
        cout<<"* ";
    }
    cout<<endl;
    f(a-1);
    for(int i = 0;i<a;i++){
        cout<<"* ";
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    f(n);

}