#include <iostream>
#include <deque>
using namespace std;

deque<int> q;
int N;

int main() {
    cin >> N;

    for(int i = 1;i<=N;i++){
        q.push_back(i);
    }



    for(int i = 1;i<N;i++){
        q.pop_front();
        int last = q.front();
        q.push_back(last);
        q.pop_front();
    }

    cout<<q.front();

    // Please write your code here.

    return 0;
}
