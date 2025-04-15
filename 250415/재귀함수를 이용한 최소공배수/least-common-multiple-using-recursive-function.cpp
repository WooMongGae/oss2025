#include <iostream>
#include <algorithm>

using namespace std;

int n;
int arr[10];
int answer = 0;

int lcd(int a , int b){
    int gcd = 1;
    for(int i = 1;i<=min(a,b);i++){
        if(a%i==0 && b%i==0){
            gcd = a*b/i;
        }
    }

    return gcd;
}

int f(int x){ //f의 역할 : x이하까지의 수들의 최대공약수 구하기
    if(x==0) return arr[x];
    
    return lcd(arr[x],f(x-1));
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout<<f(n-1);

    // Please write your code here.

    return 0;
}