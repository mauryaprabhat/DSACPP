#include<iostream>

using namespace std;

int main(){
    
    int amount;
    cout<<"Enter amount";
    cin >> amount;

    while(amount > 0){
        int n = amount/100;
        switch(n){
        case 1: cout<<"first" <<endl;
                break;
        case '1': cout<<"Second" <<endl;
                break;
        case 3: cout<<"Third" <<endl;
                break;
        default: cout<<"default";
        }
    }
            
}