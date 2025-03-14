#include <iostream>

using namespace std;

int n1, n2;
int a[100], b[100];
int answer = 0;

int f(){
    for(int i = 0;a[i]!='\0';i++){
        if(b[0] == a[i]){
            for(int j = 0;b[j]!='\0';j++){
                if(b[j] == a[i+j]){
                    answer +=1;
                    if(answer == n2){
                        cout<<"Yes";
                        return 0;
                    }
                    
                }
                else{
                    answer = 0;

                    break;
                }


            }

        }
    }

    cout<<"No";
    return 0;

}

int main() {
    cin >> n1 >> n2;

    for (int i = 0; i < n1; i++) cin >> a[i];

    for (int i = 0; i < n2; i++) cin >> b[i];

    f();

    // Please write your code here.

    return 0;
}