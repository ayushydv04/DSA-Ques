#include <iostream>
using namespace std;

bool searchTarget(int arr[][3], int rowSize, int colSize, int target){
    for(int i = 0; i < rowSize; i++){
        for(int j = 0; j < colSize; j++){
            if(arr[i][j] == target){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int arr[3][3];
    int rowSize = 3;
    int colSize = 3;
    int target = 30;

    for(int i = 0; i < rowSize; i++){
        for(int j = 0; j < colSize; j++){
            cout << "Enter element at position (" << i << ", " << j << "): ";
            cin >> arr[i][j];
        }
    }


    cout << "Printing element " << endl;
    for(int i = 0; i < rowSize; i++){
        for(int j = 0; j < colSize; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    bool  ans = searchTarget(arr, rowSize, colSize, target);

    cout << "Element " << target << " is " << (ans? "found" : "not found") << endl;


    return 0;
}