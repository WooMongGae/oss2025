#include <iostream>
using namespace std;
#include <stack>

stack<int> s;

int N;
string command[10000];
int value[10000];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> command[i];
        if (command[i] == "push") {
            cin >> value[i];
            s.push(value[i]);
        } else if(command[i] == "pop"){
            int last = s.top();
            s.pop();
            cout<< last<<endl;
        } else if(command[i] == "size"){
            cout<<s.size()<<endl;
        } else if(command[i] == "empty"){
            cout<<s.empty()<<endl;
        } else if(command[i] == "top"){
            cout<<s.top()<<endl;
        }
    }

    // Please write your code here.

    return 0;
}
