#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector<int> l;

int main(){
  int n;
  cin>>n;
  for(int i = 0;i<n;i++){
    string command;
    cin>>command;
    int d;
    if(command == "push_back"){
      cin>>d;
      l.push_back(d);
    }else if(command == "pop_back"){
      l.pop_back();
    }else if(command == "size"){
      cout<<l.size()<<endl;
    }else if(command == "get"){
      cin>>d;
      cout<<l[d-1]<<endl;
    }
  }

}