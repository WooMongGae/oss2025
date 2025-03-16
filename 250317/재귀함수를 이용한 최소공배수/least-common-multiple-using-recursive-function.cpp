#include <iostream>

using namespace std;

int n;
int arr[10];
int answer = 1;

int gcd(int x,int y){
    if(x%y == 0) return y;

    return gcd(y,x%y);
}


int lcd(int x,int y){
    return x*y/gcd(x,y);
}

int f(int r[]){
    for(int i = 0;i<n;i++){
        answer = lcd(r[i],answer);
    }
    return answer;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout<<f(arr);

    // Please write your code here.

    return 0;
}