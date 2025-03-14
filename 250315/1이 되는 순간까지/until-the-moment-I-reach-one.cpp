#include <iostream>

using namespace std;

int N;
int answer = 0;

int f(int n){
    if(n==1) return answer;

    answer +=1;

    if(n%2==0){
        return f(n/2);
    }

    if(n%2!=0){
        return f(n/3);
    }
}

int main() {
    cin >> N;
    f(N);

    cout<<answer;

    // Please write your code here.

    return 0;
}