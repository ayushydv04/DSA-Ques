#include <iostream>
using namespace std;

void printAllTriplets(int arr[], int size){
    int count = 0;
    for(int i = 0; i<size; i++){
        for(int j = 0; j<size; j++){
            for(int k = 0; k<size; k++){
                cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                count++;
                
            }
        }
    }
    cout << "Total " << count << endl;
}

int main(){
    
    int arr[4] = {10, 20, 30, 40};
    int size = 4;

    printAllTriplets(arr, size);

    return 0;
}