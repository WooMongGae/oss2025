#include <iostream>
#include <vector>

using namespace std;

int n;
int arr[100000];
int k = 100000;

int f(){
    for(int i = 1;i<=k;i*=10){
        vector<int> new_arr[10];
      
          for(int m = 0;m<n;m++){
            new_arr[arr[m]/i%10].push_back(arr[m]);
          }
        
        vector<int> sort_arr;
        for(int n = 0;n<10;n++){
          
          for(int j = 0;j<new_arr[n].size();j++){
            sort_arr.push_back(new_arr[n][j]);
    
          }
        }

        for(int j = 0;j<n;j++){
          arr[j] = sort_arr[j];
        }

    }
    return 0;
    
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

    return 0;
}
