#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int n;
int arr[100000];

void number(){
  int p = 1;
  for(int i = 0;i<6;i++){
    vector<int> v[10];
    for(int j = 0;j<n;j++){
      v[arr[j]/p%10].push_back(arr[j]); 
    }

    int index = 0;
    for(int j = 0;j<10;j++){
      for(int k = 0;k<v[j].size();k++){

        arr[index++]=v[j][k];
      }
    }

    p *=10;


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
