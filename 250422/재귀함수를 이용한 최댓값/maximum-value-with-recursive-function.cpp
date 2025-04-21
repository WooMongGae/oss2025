#include <iostream>
#include <algorithm>
using namespace std;
int n;
int arr[100];

int maxscore(int a){
    if(a==0) return arr[0];
    return max(arr[a],maxscore(a-1));

}

int main(){
    cin>>n;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    cout<<maxscore(n-1);

}