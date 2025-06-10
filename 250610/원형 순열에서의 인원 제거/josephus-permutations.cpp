#include <iostream>
#include <queue>

using namespace std;

int N, K;
queue<int> q;

int main() {
    cin >> N >> K;

    for(int i =1; i<=N;i++){
        q.push(i);
    }

    while(q.empty()==0){
        for(int i=1;i<K;i++){
            int t = q.front();
            q.pop();
            q.push(t);
        }
        int t = q.front();
        q.pop();
        cout<<t<<" ";

    }

    int i = 1;


    // Please write your code here.

    return 0;
}
