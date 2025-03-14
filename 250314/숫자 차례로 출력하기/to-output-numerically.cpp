#include <iostream>

using namespace std;

int N;

void f1(int n){
    if(N == n-N+1) {
        cout<<N<<endl;
        return; 
    }
    cout<<n-N+1<<" ";
    f1(n+1);
    

}

void f2(int n){
    if(n==1){
        cout<<1<<endl;
        return; 
    }

    cout<<n<<" ";
    f2(n-1);
}

int main() {
    cin >> N;
    f1(N);
    f2(N);
    
    

    // Please write your code here.

    return 0;
}