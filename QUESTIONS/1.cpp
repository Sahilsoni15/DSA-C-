// first and last position of an element in sorted array

//TIME COMPLEXITY --> O(log n) time
//SPACE COMPLEXITY--> O(1) space

#include <iostream>
using namespace std;

int first_occ(int arr[], int size, int key)
{
    int start, end, mid;
    start = 0;
    end = size - 1;
    int ans = -1;

    while (start <= end)
    {
        mid = start + (end - start) / 2;

        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] < key) // Right Me jao
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

int last_occ(int arr[],int size,int key){
    int start, end, mid;
    start = 0;
    end = size - 1;
    int ans = -1;

    while (start <= end)
    {
        mid = start + (end - start) / 2;

        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

int main(){
    int even[11] = {1, 2, 3, 3, 3, 3, 3, 3, 3, 4, 5};
    cout << "First Occurance of 3 is at index " << first_occ(even, 11, 3) << endl;
    cout << "Last Occurance of 3 is at INDEX " << last_occ(even, 11, 4);
    return 0;
}