#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printArry(int arr[], int size){

    for(int i=0; i < size; i++){
        cout<< arr[i] << " ";
    }
}

int main(){

   /*
    int arr[5] = {2,4,7,9,10};
    int target = 16;
    int resultArr[2];
    bool flag=false;
    for(int i=0;i<5;i++){
        int otherNum = target-arr[i];
        for(int j=i+1;j<5;j++){
            if(otherNum == arr[j]){
                resultArr[0] = i;
                resultArr[1] = j;
                flag = true;
                cout<<"first no "<<arr[i]<<" second no " <<arr[j]<<endl;
                //cout<<"first index "<<i<<" second index " <<j<<endl;
            }
        }
    }

    if(!flag){
        cout<<"Not found!" <<endl;
    }
    for(int i=0;i<2;i++){
        cout<<" indexs are - " << resultArr[i];
    }
    */

   //swap alternate numbers.
   /*
   int arr[5] = {1,2,3,4,5};
   int size = 5;

   for(int i=0; i<size; i+=2){
       if( i+1 < size){
    //    int temp;
    //    temp = arr[i];
    //    arr[i] = arr[i+1];
    //    arr[i+1] = temp;
        swap(arr[i], arr[i+1]);
       }
   }

   printArry(arr,size);
   */

//   int arr[7] = {2,5,3,5,3,2,1};

//   int size = 7;

//   for(int i = 0; i<size; i++){

//       for(int j=i+1; j<size; j++){

//           if(arr[j] == arr[i]){
//               arr[i] = -1;
//               arr[j] = -1;
//           }
//       }
//   }

//     for(int i=0; i<size; i++){
//         if(arr[i] != -1){
//             cout<< arr[i];
//         }
//     }
/*

find the unique number.
int arr[7] = {-2,5,3,5,3,-2,-1};

int size = 7;
int ans = 0;

for(int i=0; i<size; i++){
    ans = arr[i] ^ ans;
}

cout<< ans;
*/

//find the duplicate number

/*
int arr[7] = {1,5,2,7,8,9,5};

int size = 7;

for(int i=0; i<size; i++){

    for(int j=i+1; j < size; j++){
        
        if(arr[i] == arr[j]){

            cout<< arr[i] <<endl;
            return 0;
        }
    }
}

cout<< "done" ;
*/

//Union in array.
/*
int arr1[6] = {1,2,2,2, 3,4};

int arr2[4] = { 2, 2, 3 , 3 };

int i = 0, j = 0; 
while(i<6 && j<4 ){

    if(arr1[i] < arr2[j]){
        i++;
    }else if( arr1[i] > arr2[j]){
        j++;
    }else{
        //ans.push_back(arr1[i]);
        cout<< arr1[i] << " " ;
        i++;
        j++;
    }
}
*/

///find triplet


// int arr[6] = {5,7,2,3,9,4};

// int sum = 14;

// for(int i=0; i<6; i++){
//     for(int j=i+1; j<6; j++){
//         for(int k=j+1; j<6; k++){
//             if(arr[i]+arr[j]+arr[k] == sum){
//                 cout<< arr[i] << " " << arr[j] << " " << arr[k] << " ";
//             }
//         }
//     }
// }

// cout << endl;

// sort 0 and 1;
/*
int arr[9] = {1,0,1,0,0,1,1,0,0};
int size = 9;
int i=0, j= size-1 ;

while(i < j){
    while(arr[i]==0){
        i++;
    }
    while(arr[j] ==1){
        j--;
    }

    if( i<j ){
        swap(arr[i],arr[j]);
    }
}
printArry(arr,9);
*/

int arr[9] = {1,2,1,0,0,1,1,2,1};
 
int countOne = 0, countZero = 0, size = 9;

for(int i=0;i<size; i++){
    if(arr[i] == 0){
        countZero++;
    }else if(arr[i] == 1){
        countOne++;
    }
}


int countTwo = size - (countOne + countZero);

cout << " countZero- " << countZero << " " << " countOne "<< countOne << " countTwo "<< countTwo <<endl;


for(int j=0; j<countZero; j++){
    arr[j] = 0;
}

for(int j=countZero; j<countOne; j++){
    arr[j] = 1;
}

for(int j= countZero+countOne; j<size; j++){
    arr[j] = 2;
}

printArry(arr, size);

cout<<endl;

}