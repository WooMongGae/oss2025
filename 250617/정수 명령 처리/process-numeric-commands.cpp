#include <iostream>
#include <stack>
#include <string>
using namespace std;

stack<int> s;

int main(){
    int n;
    cin>>n;

    for(int i = 0;i<n;i++){
        string command;
        cin >> command;
        if(command == "push"){
            int A;
            cin>> A;
            S.push(A);
        } else if(command == "pop"){
            int p = s.top();
            s.pop();
            cout<<p<<endl;
        } else if(command == "size"){
            cout<<s.size()<<endl;
        } else if(command == "empty"){
            cout<<s.empty()<<endl;
        } else if(command == "top"){
            cout<<s.top()<<endl;
        }


    }




}
