#include <iostream>

using namespace std;

int n;
int arr[100000];


int arrange(int low ,int mid , int high){
    int i = low;
    int j = mid + 1;
    int mergearr[high];

    int k = low;
    while(i<=mid&&j<=high){
        if(arr[i]<arr[j]){
            mergearr[k] = arr[i];
            k++;
            i++;

        }else if(arr[i]>arr[j]){
            mergearr[k] = arr[j];
            k++;
            j++;
        }else{
            mergearr[k] = arr[i];
            k++;
            i++;
            mergearr[k] = arr[j];
            k++;
            j++;

        }

    }

    while(i<=mid){
        mergearr[k] = arr[i];
        k++;
        i++;
    }
    while(j<=high){
        mergearr[k] = arr[j];
        k++;
        j++;
    }

    for(int m = low;m<=high;m++){
        arr[m] = mergearr[m];
    }
    

    return 0;

}



int divide(int low , int high){
    if (low < high){
        int mid = (low + high)/2;
        divide(low , mid);
        divide(mid+1,high);
        arrange(low,mid,high);
    }

    return 0;

}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    divide(0,n-1);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    // Please write your code here.

    return 0;
}
