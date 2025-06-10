#include <iostream>
#include <stack>
#include <string>
using namespace std;
stack<char> c;

int main(){
    string s;
    cin>> s;
    for(int i = 0;i<s.size();i++){
        if(s[i]=='('){
            c.push('(');
        } else if(s[i] == ')'){
            if(c.empty() == 1){
                cout<< "No"<<endl;
                return 0;
            }
            c.pop();
        }

    }

    if(c.empty() == 1){
        cout<< "Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }




}