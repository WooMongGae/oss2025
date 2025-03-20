#include <iostream>

using namespace std;

int n;
int arr[100];
int temp;
bool answer;

void f(){

    do{
        answer = true;

        for(int i = 0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                answer  = false;
                
            }
        }
    }while(answer !=true);
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    f();
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }



    // Please write your code here.

    return 0;
}
