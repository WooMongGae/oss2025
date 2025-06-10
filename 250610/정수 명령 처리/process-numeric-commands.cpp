#include <iostream>
using namespace std;
#include <stack>
#include <string>

stack<int> s;
string command;
int a;



int main(){
    int n;
    cin>>n;
    for(int i = 0;i<n;i++){
        cin >> command;
        if(command == "push"){
            cin >> a;
            s.push(a);
        } else if(command == "pop"){
            int t = s.top();
            cout<< t<<endl;
            s.pop();
        }else if(command == "size"){
            cout<<s.size()<<endl;
        }else if(command == "empty"){
            cout<<s.empty()<<endl;
        }else if(command == "top"){
            cout<<s.top()<<endl;
        }
    }
}
