#include <iostream>

using namespace std;

int n, m;
int arr[100];
int answer;


void f(int a,int b){
    answer = 0;
    for(;a<=b;a++){
        answer +=arr[a-1];
    }
    cout<<answer<<endl;

}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < m; i++) {
        int a1, a2;
        cin >> a1 >> a2;

        f(a1,a2);
    }

    // Please write your code here.

    return 0;
}