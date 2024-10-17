#include <iostream>
using namespace std;



int main(){
    
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int rowSize = 3;
    int colSize = 3;

    // Row wise traversal
    for(int i = 0; i < rowSize; i++){
        for(int j = 0; j < colSize; j++){
            cout << arr[i][j] << " " ;
        } cout << endl;
    }

    cout << endl;
    cout << endl;

    // Col-wise traversal
    for(int col = 0; col < colSize; col++){
        for(int row = 0; row < rowSize; row++){
            cout << arr[row][col] << " " ;
        }cout << endl;
    }

    cout << endl;
    cout << endl;


    // Diagonal traversal
    for(int row = 0; row < rowSize; row++){
        for(int col = 0; col < colSize; col++){
            if(row == col){
                cout << arr[row][col] << " " ;
            }
        }
    }

    cout << endl;
    cout << endl;

    // Way 2 of diagonal traversal
    for(int row = 0; row < rowSize; row++){
        cout << arr[row][row] << " ";
    }

    
    return 0;
}