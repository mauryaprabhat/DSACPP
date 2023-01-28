#include <iostream>
#include<math.h>
using namespace std;

int main(){

    // int a=4, b=6;

    // cout<<"a&b " <<(a&b) <<endl;
    // cout<<"a|b " <<(a|b) <<endl;
    // cout<<"~a " <<(~a) <<endl;
    // cout<<"a^b " <<(a^b) <<endl;

    // int n;
    // cout<<"Enter n" <<endl;

    // cin>>n;
    // cout<<"start" <<endl;
    // int i=1;
    // for( int a=0,b=0 ; a<=1 && b<=1 ; a++,b++)
    // {
    //     cout<<a<<b<<endl;
    // }

    // int n;
    // cout<<"enter n"<<endl;
    // cin>> n;
    // bool flag=false;
    // if(n>0){
    //     if(n==2){
    //         cout<<"prime no";
    //         return;
    //     }
    // for(int i=2;i<n;i++){
    //     if(n%i==0){
    //         break;
    //         //Not prime no
    //     }else{
    //         flag=true;
    //         //prime no
    //     }
    // }
    // if(flag){
    //     cout<< "is prime no";
    // }else{
    //     cout<< "is not prime no";
    // }
    // }else{
    //     cout<<"Please enter valid no";
    // }

//infinite 0
    // for(int i=0;i<5;i--){
    //     cout<<i<<" ";
    //     i++;
    // }

// 0,3,5,7,9,11,15
    // for(int i=0;i<=15;i+=2){
    //     cout<<i<<" ";
    //     if(i&1){
    //         continue;
    //     }
    //     i++;
    // }

//printing decimal to binary
    //formula bit * 10power 1 + ans
    // int n;
    // cout<<"Enter n";
    // cin >> n;
    // int ans=0;
    // int i=0;
    // while(n!=0){
    //     int bit = n&1;
    //     ans = bit*pow(10,i)+ans;
    //     n=n>>1;
    //     i++;
    // }
    // cout<<"Binay is "<<ans;

//printing binary to decimal...
    //formula 2 power i + ans

    // int n;
    // cout<<"Enter the binary no" <<endl;

    // cin>> n;

    // int ans=0;
    // int i=0;
    // while(n!=0){
    //     int digit = n % 10;
    //     if(digit ==1){
    //         ans = ans + pow(2,i);
    //     }
    //     i++;
    //     n=n/10;
    // }
    // cout<<"ans is "<<ans<<endl;

    int n; //123
    cout<<"Enter n";
    cin >> n;
    int ans=0;
    int i=0;
    while(n!=0){
        int digit = n%10;
        ans = ans * 10 + digit;
        i++;
        n=n/10;
    }
    cout<<ans<<endl;

}