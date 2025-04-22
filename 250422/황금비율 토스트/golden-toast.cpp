#include <iostream>
#include <string>
#include <list>
using namespace std;
int n,m;
list<char> l;
int main(){
    cin>>n>>m;
    for(int i = 0;i<n;i++){
        char c;
        cin>>c;
        l.push_back(c);
    }

    list<char>::iterator it=l.end();
    for(int i = 0;i<m;i++){
        string command;
        cin>>command;
        if(command == "L"){
            if(it == l.begin()){
            }else{
                it--;
            }
        }else if(command == "R"){
            if(it == l.end()){
            }else{
                it++;
            }
        }else if(command == "D"){
            if(it == l.end()){

            }else{
                l.erease(it);
            }
        }else if(command == "P"){
            char c;
            cin>>c;
            l.insert(it,c);
        }
    }

    it = l.begin();
    for(int i = 0;i<l.size();i++){
        cout<<*it;
        it++;
    }








}
