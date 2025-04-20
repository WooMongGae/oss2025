#include<iostream>
using namespace std;
int n;
int arr[100000];

void merge(int l,int m,int h){
    int i = l;
    int j = m+1;
    int k = l;
    int new_arr[100000];

    while(i<=m&&j<=h){
        if(arr[i]<arr[j]){
            new_arr[k]=arr[i];
            k++;
            i++;
        }else{
            new_arr[k]=arr[j];
            k++;
            j++;
        }
    }

    while(i<=m){
        new_arr[k]=arr[i];
        k++;
        i++;
    }

    while(j<=h){
        new_arr[k]=arr[j];
        k++;
        j++;
    }

    for(k=l;k<=h;k++){
        arr[k] = new_arr[k];
    }
}

void mergesort(int l,int h){
    if(l<h){
        int m = (l+h)/2;

        mergesort(l,m);
        mergesort(m+1,h);
        merge(l,m,h);
    }else{
        return;
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