#include <iostream>
using namespace std;
int n;
int arr[100];

int lcd(int x,int y){
    int gcd = 1;
    for(int i =1;i<min(x,y);i++){
        if(x%i==0&&y%i==0){
            gcd = i;
        }
    }
    return x*y/gcd;
}

int f(int a){
    if(a==0) return arr[a];

    return lcd(arr[a],f(a-1));
}

int main(){
    cin>>n;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    cout<<f(n-1);


}