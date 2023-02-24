#include<iostream>
using namespace std;

int main (){
    /*
    
          1         
        1 2 1       
      1 2 3 1 2     
    1 2 3 4 1 2 3   
  1 2 3 4 5 1 2 3 4 
    */
    int n;
    cout << "Enter n";
    cin >> n;

    for (int i =0 ; i <n ;i++){
        //spaces
        for (int j=0 ; j<n-i ;j++){
            cout <<"  ";
        }
        for (int j =0 ; j<i+1; j++){
            cout<<j+1 <<" ";
        }
        for (int j =0 ; j<i ; j++){
            cout << j+1<< " ";
        }
        cout <<endl;
    }
}