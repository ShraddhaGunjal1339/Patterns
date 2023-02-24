#include<iostream>
using namespace std;

int main (){
    /*
    
*
**
***
****
*****
****
***
**
*
    
    */
   int n;
   cout << "Enter n";
   cin >> n;
    //Upper part
   for(int i =0 ; i< n ;i++){
        for (int j =0 ; j <i+1; j++){
            cout <<"*";
        }
        cout << endl;
   }

   //Lower part 
   for (int i =0 ; i < n -1 ; i++){
        for (int j =0 ;j < n -i-1 ;j++){
            cout << "*";
        }
        cout << endl;
   }
}