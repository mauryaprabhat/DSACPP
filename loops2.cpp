#include<iostream>
using namespace std;

int main(){

    // int n;
    // cout << "Enter the value of n" <<endl;
    // cin >> n;

    // int i=1;
    // while(i<=n){
    // cout<<i <<" ";
    // i++;
    // }

/*
    int i=2;
    bool flag = false;
    if(n==2){
        //flag=true;
    }else{
        while((n-1)%i !=0){
            i++;
            flag = true;
        }
    }
    if(flag){
        cout<< " Not Prima no !";
    }else{
        cout<< "Prima no !";
    }
    */
  /*
   int n;
   cout << "enter value of n ";
   cin >> n;

   int i=1;
   while(i<=n){
       int j=1;
       while(j<=n){
           cout << n-j+1;
           j++;
       }
       cout <<endl;
       i++;
   }
   */

//     int n;

//     cout << "enter value of n";
//     cin >>n;
//     int count = 1;
//     int row = 1;
//     while(row <= n){
//         int col = 1;
//         while(col <= row){
//             cout << count;
//             col++;
//             count++;
//      }
//      cout <<endl;
//      row++;
//   }

// *    
// **   
// ***  
// **** 
// *****

    // int n ;
    // cout << " enter the value of n ";

    // cin >> n ;
    // int row = 1;
    // while(row <= n){
    //     int col = 1;
    //     while(col <= row){
    //         cout << "*";
    //         col++;
    //     }
    //     row++;
    //     cout << endl;
    // }
    

// 1   
// 23  
// 345 
// 4567
//    int n ;
//    cout << "Enter n";
//    cin >> n;

//    int row =1;
//    while(row <= n){
//        int col = 1;
//        while(col <= row){
//            cout << row+col-1 ;
//            col ++;
//        }
//        cout << endl;
//        row++;
//    }
   

// 1
// 23
// 345
// 4567

//   int n ;
//   cout <<"enter n";
//   cin >> n;

//     int row =1;
//   while(row <=n){
//       int col =1;
//       int value = row;
//       while(col <= row){
//         cout << value;
//         value++;
//         col++;          
//       }
//       cout <<endl;
//       row++;
//   }
  

// 1   
// 21  
// 321 
// 4321

//  int n;
//  cout << "Enter n";
//  cin >> n;

//  int row = 1;
//  while(row <= n){
//      int col=1;
//      while (col<=row)
//      {
//          cout << row-col+1;
//          col++;
//      }
//      cout<<endl;
//      row++;
//  }

// AAA
// BBB
// CCC

// int n;
// cout << "Enter n";
// cin >> n;

// int row =1;
// while(row <=n){
//     int col=1;
//     char ch = 'A';
//     while (col<=n)
//     {
//         char ch2 = ch+row-1; 
//         cout<< ch2;
//         col++;
//     }
//     cout<<endl;
//     row++;
// }

// ABC
// ABC
// ABC
// int n;
//  cout<<"Enter n";
//  cin >> n;

//  int row =1;
//  while(row<=n){
//      int col=1;
//      char ch='A';
//      while(col<=n){
//          char result = 'A' + col -1;
//          cout<<result;
//          col++;
//      }
//      row++;
//      cout<<endl;
//  }

// ABC
// BCD
// CDE

// int n;
//  cout<<"Enter n";
//  cin >> n;

//  int row =1;
//  while(row<=n){
//      int col=1;
//      char ch='A';
//      while(col<=n){
//          char result = 'A' + row + col -2;
//          cout<<result;
//          col++;
//      }
//      row++;
//      cout<<endl;
//  }

// A
// BB
// CCC

// int n;
// cout<<"Enter n";
// cin>> n;

// int row = 1;
// while( row <=n){
//     int col =1;
//     while(col<=row){
//         char result = 'A' +row-1;
//         cout<<result;
//         col++;
//     }
//     cout<<endl;
//     row++;
// }

// D
// CC
// BBB
// AAAA

// int n;
// cout<<"Enter n";
// cin>> n;

// int row = 1;
// while( row <=n){
//     int col =1;
//     char result = 'A'+n-row;
//     while(col<=row){
//         cout<<result;
//         col++;
//     }
//     cout<<endl;
//     row++;
// }

//   *
//  **
// ***

// int n;
// cout<<"Enter n";
// cin>> n;

// int row = 1;
// while( row <=n){
//     int col =1;
//     int space = n-row;
//     while(space){
//         cout<<" ";
//         space--;
//     }
//     while(col<=row){
//         cout<<"*";
//         col++;
//     }
//     cout<<endl;
//     row++;
// }

// ****
// ***
// **
// *

// int n;
// cout<<"Enter n";
// cin>> n;

// int row = 1;
// while( row <= n){
//     int col =1;
//     int star = n-row+1;
//     while(star){
//         cout<<"*";
//         star--;
//     }
//     cout<<endl;
//     row++;
// }

// ****
//  ***
//   **
//    *

// int n;
// cout<<"Enter n";
// cin>> n;

// int row = 1;
// while( row <= n){
//     int col =1;
//     int space = row-1;
//     while(space){
//         cout<<" ";
//         space--;
//     }
//     int star = n-row+1;
//     while(star){
//         cout<<"*";
//         star--;
//     }
    
//     cout<<endl;
//     row++;
// }

//    1
//   22
//  333

// int n;
// cout<<"Enter n";
// cin>> n;

// int row = 1;
// while( row <= n){
    
//     int space = n-row + 1;
//     while(space){
//         cout<<" ";
//         space--;
//     }

//     int col = 1;
//     while(col<=row){
//         cout<<row;
//         col++;
//     }
//     cout<<endl;
//     row++;
// }

//    1
//   121
//  12321
// 1234321

// int n;
// cout<<"Enter n";
// cin>> n;

// int row=1;
// while(row<=n){

//   int space = n-row;
//   while(space){
//       cout<< " ";
//       space--;
//   }

//   int col=1;
//   while (col<=row) {
//       cout<< col ;
//       col++;
//   }

//    int start =row-1;
//    while(start){
//       cout<<start;
//       start--;
//   }
  
// cout<<endl;
// row++;
// }

//    1
//   23
//  456
// 78910

// int n;
// cout<<"Enter n";
// cin>> n;
// int row=1;
// int value = 1;
// while(row<=n){
//     int space;
//     space = n-row;
//     while(space){
//         cout<<" ";
//         space--;
//     }
    
//     int col=1;
//     while(col<=row){
//         cout<<value;
//         col++;
//         value++;
//     }
// cout<<endl;
// row++;
// }

//
int n;
cout<<"enter n";
cin>> n;

int row=1;
while(row<=n){
    int col=1;
    int val = n-row+1;
    while(col<=val){
        cout<<col;
        col++;
    }

    int star = 
    row++;
    cout<<endl;
}

}