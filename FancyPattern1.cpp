#include<iostream>
using namespace std;

int main()
{

/*

Give number 
5

********1********
*******2*2*******
******3*3*3******
*****4*4*4*4*****
****5*5*5*5*5****


*/
    int n; 
    cout << "Give number "<< endl;
    cin >> n ;
    // if(n > 9 ){
    //     cout << "Plese put value less than 9. " << endl;
    //     return 0;
    // }


    assert(n<=9);


    /*
    
        Assertions are statements used to test assumptions made by programmers. For example, we may use assertion to check if the pointer returned by malloc() is NULL or not. 
    Following is the syntax for assertion.
    

    void assert( int expression ); 
    If the expression evaluates to 0 (false), then the expression, sourcecode filename, and line number are sent to the standard error, and then abort() function is called. 
    For example, consider the following program. 
    
    */

    for (int i = 0 ; i < n ; i++){
        int start_num_index = 8-i;
        int num =i+1;
        int count_num = num ;
        for (int j = 0 ; j < 17 ; j++){
            if(j == start_num_index && count_num > 0){
                cout <<  num;
                start_num_index += 2;
                count_num --;
            }
            else{
                cout << "*";
            }
        }
        cout << endl;
    }
    return 0;
}