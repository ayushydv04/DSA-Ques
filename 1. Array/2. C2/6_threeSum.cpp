#include <iostream>
using namespace std;

void printThreeSum(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {

                cout << "Triplet: " << arr[i] << ", " << arr[j] << ", " << arr[k] << endl;
                count++;
            }
        }
    }
    cout << "Total number of triplets: " << count << endl;
}

int main()
{
    int arr[4] = {10, 20, 30, 40};
    int size = 4;

    printThreeSum(arr, size);

    return 0;
}