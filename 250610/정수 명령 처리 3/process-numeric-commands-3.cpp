#include <iostream>
#include <string>
#include <deque>

using namespace std;

deque<int> d;
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
                d.push_front(num[i]);
            } else{
                d.push_back(num[i]);
            }
        }else if(cmd[i]=="pop_front"){
            int t = d.front();
            d.pop_front();
            cout<<t<<endl;
        }else if(cmd[i]=="pop_back"){
            int t = d.back();
            d.pop_back();
            cout<<t<<endl;
        }else if(cmd[i]=="size"){
            cout<<d.size()<<endl;
        }else if(cmd[i]=="empty"){
            cout<<d.empty()<<endl;
        }else if(cmd[i] == "front"){
            cout<<d.front()<<endl;
        }else if(cmd[i] == "back"){
            cout<<d.back()<<endl;
        }
    }

    // Please write your code here.

    return 0;
}
