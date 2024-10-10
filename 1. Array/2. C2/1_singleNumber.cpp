#include <iostream>
using namespace std;

int SingleNumber(int arr[], int size){
    int ans = 0;

    for(int i = 0; i < size; i++){
        ans = ans ^ arr[i];
    }
    cout << ans << endl;
}



int main(){
    
    int arr[7] = {1, 2, 3 , 2, 6, 6, 1};
    int size = 7;

    SingleNumber(arr, size);

    return 0;
}