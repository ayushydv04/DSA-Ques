#include <iostream>
using namespace std;

void RotateArray(int arr[], int size, int shift){
    int finalShift = shift % size;

    if(finalShift == 0){
        return;
    }

    int temp[100];
    int index = 0;
    for (int i = size-finalShift; i < size; i++){
        temp[index] = arr[i];
        index++; 
    }

    for(int i = size-1; i >= 0; i--){
        arr[i] = arr[i-finalShift];
    }

    for(int i = 0; i<finalShift; i++){
        arr[i] = temp[i];
    }
    


}

int main(){
    
    int arr[6] = {10, 20, 30, 40, 50, 60};
    int size = 6;
    int shift = 2;

    cout << "Original Array: ";
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }

    RotateArray(arr, size, shift);

    cout << "\nRotated Array: ";
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }


    return 0;
}