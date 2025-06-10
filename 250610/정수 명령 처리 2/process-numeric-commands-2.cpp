#include <iostream>
#include <string>
#include <queue>

using namespace std;
int N;
queue<int> q;

string command[10000];
int A[10000];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> command[i];
        if (command[i] == "push") {
            cin >> A[i];
            q.push(A[i]);
        }else if(command[i] == "pop"){
            int f = q.front();
            q.pop();
            cout<<f<<endl;
        }else if(command[i] == "size"){
            cout<<q.size()<<endl;
        }else if(command[i] == "empty"){
            cout<<q.empty()<<endl;
        }else if(command[i] == "front"){
            cout<<q.front()<<endl;
        }
    }

    // Please write your code here.

    return 0;
}