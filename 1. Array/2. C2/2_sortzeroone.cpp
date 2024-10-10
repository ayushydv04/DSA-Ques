#include <iostream>
using namespace std;

void SortZeroAndOne(int arr[], int size){
    int zeroCount = 0;
    int oneCount = 0;

    for(int i = 0; i<size; i++){
        if(arr[i] == 0){
            zeroCount++;
        }
        else{
            oneCount++;
        }
    }

    int i = 0;
    for(; i< zeroCount; i++){
        arr[i] = 0;
    }
    for(; i<size; i++){
        arr[i] = 1;
    }
}

int main(){
    
    int arr[8] = {0, 1, 1, 1, 0, 0, 1, 1};
    int size = 8;

    SortZeroAndOne(arr, size);

    cout << "printing array after sorting" << endl;
    for(int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}