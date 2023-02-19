#include<iostream>
using namespace std;

int main (){
    /*
    
    1 2 3 4 
    1 2 3
    1 2
    1
    
    */
    int n ;
    cout << " Enter n ";
    cin >> n ;

    for ( int i =0 ;i< n ; i++ ){
        for ( int j = 0 ; j < n-i ; j++){
            cout << j+1 <<" ";
        }
        cout << endl;
    }
}