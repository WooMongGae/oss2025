#include <iostream>
#include <vector>

using namespace std;
vector<int> l;
int N;
string command[10000];
int num[10000];


int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> command[i];
        if (command[i] == "push_back" || command[i] == "get") {
            cin >> num[i];
            if (command[i] == "push_back")
            {
              l.push_back(num[i]);
            }
            else if (command[i] == "get")
            {
              cout<<l[num[i]-1]<<endl;
            }
            
        }
        if (command[i] == "size")
            {
              cout<<l.size()<<endl;
            }
            else if (command[i] == "pop_back")
            {
              l.pop_back();
            }
    }

    // Please write your code here.

    return 0;
}

