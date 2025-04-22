#include <iostream>
#include <vector>
#include <string>
using namespace std;
int n;
int main(){
  cin>>n;
  vector<int> v;
  for(int i = 0;i<n;i++){
    string command;
    cin>>command;
    if(command == "push_back"){
      int index;
      cin>>index;
      v.push_back(index);
    }else if(command == "pop_back"){
      v.pop_back();
    }else if(command == "size"){
      cout<<v.size()<<endl;
    }else if(command =="get"){
      int index;
      cin>>index;
      cout<<v[index-1]<<endl;
    }
  }



}