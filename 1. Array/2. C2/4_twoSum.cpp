#include <iostream>
using namespace std;

// variation 1
// bool printTwoSum(int arr[], int n){
//     for(int i = 0; i < n; i++){
//         for(int j = 0;  j < n; j++){
//             if(arr[i] + arr[j] == 30){
//                 return true;
//             }
//         }
//     }
//     return false;
// }

// variation 2
pair <int, int> checkTwoSum(int arr[], int n, int target){
    pair <int, int> ans = make_pair(-1, -1);

    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(arr[i] + arr[j] == target){
                ans.first = arr[i];
                ans.second = arr[j];
                return ans;
            }
        }
        
    }
}

int main(){
    int arr[4] = {10, 20, 30, 40};
    int size = 4;
    int target = 30;

    pair <int, int> ans = checkTwoSum(arr, size, target);

    // if(ans){
    //     cout << "pair exists" << endl;
    // }
    // else{
    //     cout << "pair does not exist" << endl;
    // }

    if(ans.first == -1 && ans.second == -1){
        cout << "Pair does not exist" << endl;
    }
    else{
        cout << "Pair exists" << ans.first << " " << ans.second << endl;
    }

    return 0;
}