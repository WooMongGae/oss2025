#include <iostream>
#include <algorithm>
using namespace std;
int arr[100];

int gcd(int x,int y){
    int gcd;
    for(int i = 1;i<=min(x,y);i++){
        if(x%i==0&&y%i==0){
            gcd = i;
        }
    }
    return x*y/gcd;
}

int lcd(int a){
    if(a==0) return arr[0];
    return gcd(arr[a],lcd(a-1));
}

int main(){
    int n;
    cin>>n;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    cout<<lcd(n-1);

}