#include <iostream>
#include <vector>
using namespace std;

int n;
int arr[100000];

void number(){
  int pos = 1;
  for(int i =0;i<6;i++){
    vector<int> v[10];
    for(int i =0;i<n;i++){
      v[arr[i]/pos%10].push_back(arr[i]);
    }
    int index = 0;
    for(int i = 0;i<10;i++){
      for(int j = 0;j<v[i].size();j++){
        arr[index] = v[i][j];
        index++;
      }
    }
    pos *=10;
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
