#include <iostream>
#include <queue>
using namespace std;

queue<int> a;
queue<int> b;

int N, K;

int main() {
    cin >> N >> K;


    for(int i = 1; i<=N;i++){
        a.push(i);
    }

    for(int i = 1; i<=N;i++){
        for(int j = 1;j<K;j++){
            int s = a.front();
            a.pop();
            a.push(s);
        }

        cout<<a.front()<<" ";
        a.pop();
    }


    // Please write your code here.

    return 0;
}
