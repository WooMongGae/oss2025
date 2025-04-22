#include <iostream>
#include <algorithm>
using namespace std;
int n;
int arr[10];

int lcd(int x,int y){
    int gcd;
    for(int i = 1;i<=min(x,y);i++){
        if(x%i==0&&y%i==0){
            gcd = i;
        }
    }
    return x*y/gcd;
}

int f(int a){
    if(a==0) return arr[0];
    return lcd(arr[a],f(a-1));
}

int main(){
    cin>>n;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    cout<<f(n-1);


}