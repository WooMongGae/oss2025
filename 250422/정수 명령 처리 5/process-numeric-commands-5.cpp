#include <iostream>
#include <vector>
#include <string>
using namespace std;
int n;
vector<int> v;

int main(){
  cin>>n;
  for(int i = 0;i<n;i++){
    string command;
    cin>>command;
    if(command == "push_back"){
      int index;
      cin>>index;
      v.push_back(index);
    }else if(command == "pop_back"){
      cout<<v.back()<<endl;
      v.pop_back();
    }else if(command == "size"){
      cout<<v.size()<<endl;
    }else if(command == "get"){
      int index;
      cin>>index;
      cout<<v[index]<<endl;
    }

  }




}