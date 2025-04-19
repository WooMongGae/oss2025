#include <iostream>
using namespace std;
int arr[100];

int gcd(int x,int y){
    for(int i = 1;i<=min(x,y);i++){
        if(x%i==0&&y%i==0){
            return x*y/i;
        }

    }
}

int lcd(int a){
    if(a==0) return arr[0];
    return gcd(arr[a],f(a-1));
}

int main(){
    int n;
    cin>>n;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    cout<<lcd(n-1);

}