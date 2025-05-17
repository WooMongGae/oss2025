#include <iostream>
#include <string>
#include <stack>
using namespace std;

stack<char> c;
string str;

int main() {
    cin >> str;


    for(int i = 0;i<str.size();i++){

        if(str[i] =='('){
            c.push('(');
        } else{
            if(c.empty()==true){
                cout<<"No"<<endl;
                return 0;
            }

            c.pop();
        }
    }

    if(c.empty()==false){
        cout<<"No"<<endl;
        return 0;
    } else{
        cout<<"Yes"<<endl;

    }



    // Please write your code here.

    return 0;
}
