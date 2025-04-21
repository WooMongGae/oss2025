#include <iostream>
using namespace std;
int n;
int arr[100000];

void merge(int l,int m,int h){
    int i = l;
    int j = m+1;
    int new_arr[100000];
    int index =l;

    while(i<=m&&j<=h){
        if(arr[i]<arr[j]){
            new_arr[index] = arr[i];
            index++;
            i++;
        }else{
            new_arr[index] = arr[j];
            index++; 
            j++;
        }
    }

    while(i<=m){
            new_arr[index] = arr[i];
            index++;
            i++;
    }

    while(j<=h){
            new_arr[index] = arr[j];
            index++;
            j++;
    }

    for(int i = l;i<h;i++){
        arr[i] = new_arr[i];
    }

}

void mergesort(int l,int h){
    if(l<h){

        int m = (l+h)/2;
        mergesort(l,m);
        mergesort(m+1,h);
        merge(l,m,h);


    }
}

int main(){
    cin>>n;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    mergesort(0,n-1);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}