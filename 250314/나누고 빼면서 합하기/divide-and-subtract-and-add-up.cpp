#include <iostream>

using namespace std;

int n, m;
int A[100];
int answer = 0;

int f(int a){

    answer += A[a-1];

    if(a == 1){
        return 0;
    }

    if(a%2==0){
        return f(a/2); 
    }
    else{
        return f(a-1);
    }
    
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    f(m);

    cout<<answer;

    // Please write your code here.

    return 0;
}