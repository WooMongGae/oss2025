#include <iostream>
#include <list>
#include <string>
using namespace std;
list<char> l;


int main(){
    int n,m;
    cin>>n>>m;
    for(int i = 0;i<n;i++){
        char c;
        cin>>c;
        l.push_back(c);
    }

    list<char>::iterator it = l.end();

    for(int i = 0;i<m;i++){
        string command;
        cin>>command;
        if(command == "L"){
            if(it !=l.begin()){
                it--;
            }
        }else if(command == "R"){
            if(it !=l.end()){
                it++;
            }
        }else if(command == "D"){
            if(it !=l.end()){
                it = l.erase(it);
            }
        }else if(command == "P"){
            char c;
            cin>>c;
            l.insert(it,c);
        }
    }

    for(it =l.begin();i!=l.end();it++){
        cout<<*it;
    }








}
