#include <iostream>

using namespace std;

int n;
int arr[100];

void bubble(){
    for(int i = 0;i<n;i++){
        for(int j = i;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

}

int main(){
    cin>>n;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    bubble();
    for(int i = 0; i<n;i++){
        cout<<arr[i]<<endl;
    }


}