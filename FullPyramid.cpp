#include<iostream>
using namespace std;

int main(){
    /*
    
         *
        * *
       * * *
      * * * *
     * * * * * 
    
    */
    int n ;
    cout << "Enter n "<< endl;
    cin >> n;
    for ( int i =0 ; i < n ; i++){
        //space
        for ( int j =0; j < n-i-1; j++){
            cout << " ";
        }
        for ( int j=0 ; j <i+1;j++){
            cout <<"* ";
        }
        cout << endl ;
    }
}