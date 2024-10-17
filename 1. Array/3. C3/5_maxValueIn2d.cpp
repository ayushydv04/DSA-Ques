#include <iostream>
#include <limits.h>
using namespace std;



int findMax(int arr[][3], int rowSize, int colSize){
    int maxVal = INT_MIN;

    for(int i = 0; i < rowSize; i++){
        for(int j = 0; j < colSize; j++){
            maxVal = max(maxVal, arr[i][j]);
        }
    }
    return maxVal;
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

    int ans = findMax(arr, rowSize, colSize);

    cout << "Maximum element in the array is: " << ans << endl;



    return 0;
}