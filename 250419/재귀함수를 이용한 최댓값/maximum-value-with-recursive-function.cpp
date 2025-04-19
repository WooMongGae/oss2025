#include <iostream>
using namespace std;
int arr[100];

int f(int a){
    if(a==0) return arr[0];
    return arr[a]>f(a-1)?arr[a]>f(a-1);
}

int main(){
    int n;
    cin >> n;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    cout<<f(n-1);
}