#include <iostream>
#include <string>
#include <list>

using namespace std;

int n, m;
string s;
list<char> l;
list<char> :: iterator it;

int main() {
    cin >> n >> m;
    cin >> s;
    for(char i : s){
        l.push_back(i);
    }
    it = l.end();
    

    for (int i = 0; i < m; i++) {
        char command;
        cin >> command;
        if (command == 'P') {
            char c;
            cin >> c;

            l.insert(it, c);
            it++;
        }else if (command == 'L')
        {
          if(it!=l.begin()){
            it--;
          }
          
        }else if (command == 'R')
        {
          if(it!=l.end()){
            it++;
          }
        }else if (command == 'D')
        {
          l.erase(it);
        }
  
        
    }


    for(it = l.begin();it!=l.end();it++){
      cout<<*it;
    }

    // Please write your code here.

    return 0;
}