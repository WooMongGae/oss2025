#include <iostream>
#include <list>
#include <string>
using namespace std;
list<int> l;


int main(){
    int N;
    cin>>N;
    for(int i = 0;i<N;i++){
        string command;
        cin>>command;
        if(command == "push_front"){
            int index;
            cin>>index;
            l.push_front(index);
        }else if(command == "push_back"){
            int index;
            cin>>index;
            l.push_back(index);
        }else if(command == "pop_front"){
            cout<<l.front()<<endl;
            l.pop_front();
        }else if(command == "pop_back"){
            cout<<l.back()<<endl;
            l.pop_back();
        }else if(command =="size"){
            cout<<l.size()<<endl;
        }else if(command == "empty"){
            cout<<l.empty()<<endl;
        }else if(command == "front"){
            cout<<l.front()<<endl;
        }else if(command == "back"){
            cout<<l.back()<<endl;
        }




    }




}