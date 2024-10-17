#include <iostream>
using namespace std;

void firstOccurrence(int arr[], int n, int target, int &firstOccIndex){
    int s = 0;
    int e = n - 1;
    int mid = s + (e-s)/2;

    while(s <= e){
        if(arr[mid] == target){
            firstOccIndex = mid;
            e = mid - 1;
        }
        if(arr[mid] < target){
            s = mid + 1;
        }
        if(arr[mid] > target){
            e = mid - 1;
        }
        mid = s + (e - s)/2;
    }
}

void lastOccurrence(int arr[], int n, int target, int &lastOccurrenceIndex){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    
    while(s <= e){
        if(arr[mid] == target){
            lastOccurrenceIndex = mid;
            s = mid + 1;
        }
        if(arr[mid] < target){
            s = mid + 1;
        }
        if(arr[mid] > target){
            e = mid - 1;
        }
        mid = s + (e - s)/2;
    }
}

int main(){
    
    int arr[] = {2, 3, 4, 5, 5, 5, 5, 5, 7, 9};
    int n = 10;
    int target = 5;

    int firstOccIndex = -1;
    firstOccurrence(arr, n, target, firstOccIndex);

    int lastOccIndex = -1;  
    lastOccurrence(arr, n, target, lastOccIndex);


    int totalOcc = (lastOccIndex - firstOccIndex) + 1;

    cout << "Total Occurrence is " << totalOcc << endl;

    return 0;
}