#include <iostream>

using namespace std;

void printArray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<< " ";
    }

}

int getMax(int n[], int l){
int max=n[0];
for(int i=0;i<l;i++){
    if(n[i] > max){
        max = n[i];
    }
}
return max;
}

int getMin(int n[], int l){
int min=n[0];
for(int i=0;i<l;i++){
    if(n[i] < min){
        min = n[i];
    }
}
return min;
}

void swap1(int xrr,int yrr){
    int temp;
    temp = xrr;
    xrr = yrr;
    yrr= temp;
}

void reverse(int arr[], int size){
    int start = 0;
    int end = size-1;

    while(start <= end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main(){

    // int a[] = {};
    // fill_n(a,100,1);
    // int b[1000] = {1,6,2,7,89,34};

    // int ch[5] = {'a','b','e','f'};

    // for(int i=0;i<=4;i++){
    //     cout<< ch[i] << " "; 
    // }

/*
    int arraySize[10000];

    int n;

    cout <<"Enter the array size for the operations "<<endl;
    cin >> n;

    cout<<"Enter elements "<<endl;

    for(int i=0;i<n;i++){
        cin>> arraySize[i];
    }

    cout<<"Max no is " <<getMax(arraySize,n) <<endl;

    cout<<"Max no is " <<getMin(arraySize,n) <<endl;
    //printArray(b,10);
*/

    int arr[6] = {4,6,1,3,9,7};

    int brr[5] = {14,66,11,43,9};

    reverse(arr,6);
    reverse(brr,5);

    printArray(arr, 6); cout<<endl;
    printArray(brr, 5); cout<<endl;
}

