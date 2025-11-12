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
            end = mid - 1; //MOVE LEFT
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
            start = mid + 1; //MOVE RIGHT
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

int total_occ(int arr[],int size,int key){
    int first=first_occ(arr,size,key);

    // if key not found
    if(first == -1)
    return 0;

    int last=last_occ(arr,size,key);

    //count of occurance
    return last-first +1;
}
int main(){
    int even[11] = {1, 2, 3, 3, 3, 3, 3, 3, 3, 4, 5};
    int key=3;
    cout<< "Total occurrences of " << key << " = " << total_occ(even, 11, key) << endl;
    return 0;
}