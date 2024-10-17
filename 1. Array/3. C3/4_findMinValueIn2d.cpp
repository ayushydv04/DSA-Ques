#include <iostream>
#include <limits.h>
using namespace std;



int findMin(int arr[][3], int rowSize, int colSize){
    int minVal = INT_MAX;

    for(int i = 0; i < rowSize; i++){
        for(int j = 0; j < colSize; j++){
            minVal = min(minVal, arr[i][j]);
        }
    }
    return minVal;
}

int main(){
    int arr[3][3] = {
        {10, 20, 3},
        {4, 5, 2},
        {7, 8, 9}
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

    int ans = findMin(arr, rowSize, colSize);

    cout << "Minimum element in the array is: " << ans << endl;



    return 0;
}