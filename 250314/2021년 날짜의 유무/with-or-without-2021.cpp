#include <iostream>

using namespace std;

int M, D;

int f(int m,int d){
    if(m==1||m==3||m==5||m==7||m==8||m==10||m==12){
        if(D<=31){
            cout<<"Yes";
            return 0;
        }
        else{
            cout<<"No";
            return 0;
        }

    }
    else if(m==4||m==6||m==9||m==11){
        if(D<=30){
            cout<<"Yes";
            return 0;
        }
        else{
            cout<<"No";
            return 0;
        }
        
    }
    else{
        if(D<=28){
            cout<<"Yes";
            return 0;
        }
        else{
            cout<<"No";
            return 0;
        }

    }
}



int main() {
    cin >> M >> D;
    f(M,D);

    // Please write your code here.

    return 0;
}