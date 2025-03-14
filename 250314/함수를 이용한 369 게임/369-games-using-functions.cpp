#include <iostream>

using namespace std;

int a, b;
int answer = 0;

int f(int n){ 
    
    if(n<10){
        if(n%3==0){ 
            return answer +=1;
        }else {
        return 0;
        }
    }

    if(n%10==3||n%10==6||n%10==9){
        answer +=1;
        return 0;
    }
    else{
        return f(n/10);
    }

    return 0;


}

int main() {
    cin >> a >> b;
    
    for(;a<=b;a++){
        if(a%3==0){
            answer +=1;
        }
        else{
            f(a);
        }
    }
    cout<<answer;

    // Please write your code here.

    return 0;
}