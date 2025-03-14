#include <iostream>

using namespace std;

int a, b;
int answer = 0;
int twice;

int f(int n,int m){
    for(;n<=m;n++){
        twice = 0;

        for(int i = n-1;i>=2;i--){
            if(n%i==0){
                twice = 1;
            }
        }

        if(twice ==1){
            continue;
        }

        if((n%10+n/10)%2==0){
            answer +=1;

        }
    }
    return 0;


}

int main() {
    cin >> a >> b;
    f(a,b);
    cout<<answer;

    // Please write your code here.

    return 0;
}