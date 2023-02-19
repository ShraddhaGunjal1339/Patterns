#include<iostream>
using namespace std;

int main (){
    /*
    
    1    2    3    4
    2         4      
    3    4
    4

    */
    int n;
    cout <<"Enter n ";
    cin >> n;

   for ( int i = 0 ; i < n ; i++){
    for ( int  j =0 ; j < n-i ; j++){
        if( i== 0 && j !=0 && j !=n-1){
            cout << j+1;
        }
        if(j ==0 && i!= n-1 ){
            cout<<i+1 ;
        }
      
        if( j == n-i-1){
            cout << n;
        }
        else{
            cout <<"    ";
        }
    }
    cout << endl;
   } 
}