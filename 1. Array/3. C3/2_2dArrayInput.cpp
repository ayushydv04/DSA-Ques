#include <iostream>
using namespace std;

int main(){
    int arr[4][4];
    int rowSize = 4;
    int colSize = 4;

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

    return 0;
}