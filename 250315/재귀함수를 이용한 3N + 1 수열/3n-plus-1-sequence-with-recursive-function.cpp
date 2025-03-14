#include <iostream>

using namespace std;

int n;
int answer = 0;

int f(int a){
    if(a==1) return answer;
    answer +=1;

    if(a%2==0){
        return f(a/2);
    }else{
        return f((a*3)+1);
    }
}

int main() {
    cin >> n;
    cout<<f(n);

    // Please write your code here.

    return 0;
}