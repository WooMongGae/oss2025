#include <iostream>
#include <list>
#include <string>
using namespace std;

int main(){
    int n,m;
    cin>>n;
    cin>>m;
    list<char> l;
    list<char>::iterator it;
    for(int i = 0;i<n;i++){
        char c;
        cin>>c;
        l.push_back(c);
    }
    it = l.end();
    for(int i = 0;i<m;i++){
        char command;
        cin>>command;
        if(command == 'L'){
            if(it == l.begin()) continue;
            it--;
        }else if(command == 'R'){
            if(it == l.end()) continue;
            it++;
        }else if(command == 'D'){
            if(it == l.end()) continue;
            l.erase(it);
        }else if(command == 'P'){
            char w;
            cin>>w;
            l.insert(it,w);
        }
    }
    for(it = l.begin();it!=l.end();it++){
        cout<<*it;
    }
}

