#include <iostream>
#include <vector>
using namespace std;

int arr[100000];
int n;

void number(){
    int p = 1;
    for(int i = 0;i<6;i++){
        vector<int> new_arr[10];
        for(int j = 0;j<n;j++){
            new_arr[arr[j]/p%10].push_back(arr[j]);
        }
        int index = 0;
        for(int k = 0;k<10;k++){
            for(int l = 0;l<(int)new_arr[k].size();l++){
                arr[index] = new_arr[k][l];
                index++; 
            }
        }
        p*=10;
    }
}

int main(){
    cin>>n;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    number();
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }


}