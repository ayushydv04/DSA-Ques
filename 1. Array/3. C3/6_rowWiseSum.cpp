#include <iostream>
#include <limits.h>
using namespace std;


// Row wise sum
void rowWiseSum(int arr[][3], int rowSize, int colSize){
    for(int i = 0; i < rowSize; i++){
        int sum = 0;
        for(int j = 0; j < colSize; j++){
            sum += arr[i][j];
        }
        cout << "Sum of elements in row " << i+1 << ": " << sum << endl;
    }
}

// Col wise sum
void colWiseSum(int arr[][3], int rowSize, int colSize){
    for(int i = 0; i < colSize; i++){
        int sum = 0;
        for(int j = 0; j < rowSize; j++){
            sum += arr[j][i];
        }
        cout << "Sum of elements in col " << i+1 << ": " << sum << endl;
    }
}

// Col wise sum
void diagWiseSum(int arr[][3], int rowSize, int colSize){
    int sum = 0;
    for(int i = 0; i < rowSize; i++){
        sum += arr[i][i];
    }

    cout << "DiagWiseSum: " << sum << endl;
        
}

int main(){
    int arr[3][3] = {
        {10, 20, 3},
        {4, 5, 2},
        {7, 8, 99}
    };

    int rowSize = 3;
    int colSize = 3;

    cout << "Printing element " << endl;
    for(int i = 0; i < rowSize; i++){
        for(int j = 0; j < colSize; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // rowWiseSum(arr, rowSize, colSize);

    // colWiseSum(arr, rowSize, colSize);
    diagWiseSum(arr, rowSize, colSize);



    return 0;
}