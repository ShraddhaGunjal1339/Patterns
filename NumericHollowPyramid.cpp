#include<iostream>
using namespace std;

int main (){
    /*
    1 
    1 2 
    1   3 
    1     4         
    1 2 3 4 5  
    
    */
    int n;
    cout <<"Enter n ";
    cin >> n;

   for ( int i = 0 ; i < n ; i++){
    for ( int  j =0 ; j < i+1 ; j++){
        if( j ==0 || j ==i || i == n-1){
        cout << j+1<<" ";
        }else{
            cout <<"  ";
        }
    }
    cout << endl;
   } 
}