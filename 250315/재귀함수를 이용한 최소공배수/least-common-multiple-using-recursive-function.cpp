#include <iostream>

using namespace std;

int n;
int arr[10];

int f(int a){
    if(a==0) return arr[0];
    int i = 1;
    int j = 1;

    while(true){
        
        for(j = 1;arr[a]*i>=f(a-1)*j;j++){
            if(arr[a]*i==f(a-1)*j){
                return arr[a]*i;

            }
        }
        if(arr[a]*i==f(a-1)*j){
            break;
        }
        i++;
        
    }

    return arr[a]*i;


    
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