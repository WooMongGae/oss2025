#include <iostream>
#include <string>
#include <deque>
using namespace std;

deque<int> q;
int N;
string cmd[10000];
int num[10000];


int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> cmd[i];
        if (cmd[i] == "push_front" || cmd[i] == "push_back") {
            cin >> num[i];
            if(cmd[i] == "push_front"){
                q.push_front(num[i]);
            } else{
                q.push_back(num[i]);
            }
        } else if(cmd[i] == "pop_front"){
            int last = q.front();
            q.pop_front();
            cout<<last<<endl;

        } else if(cmd[i] == "pop_back"){
            int last = q.back();
            q.pop_back();
            cout<<last<<endl;
            
        } else if(cmd[i] == "size"){
            cout<<q.size()<<endl;
            
        } else if(cmd[i] == "empty"){
            cout<<q.empty()<<endl;
            
        } else if(cmd[i] == "front"){
            cout<<q.front()<<endl;
            
        } else if(cmd[i] == "back"){
            cout<<q.back()<<endl;
            
        }
    }

    // Please write your code here.

    return 0;
}
