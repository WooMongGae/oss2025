#include <iostream>

using namespace std;

int n;

void f(int a){
    if(a == 0) return;
    for(int i = 0;i<a;i++){
        cout<<"* ";
        if(i==a-1) cout<<endl;
    }
    f(a-1);
    for(int i = 0;i<a;i++){
        cout<<"* ";
        if(i==a-1) cout<<endl;
    }

    
} 

int main() {
    cin >> n;
    f(n);
    return 0;
}

