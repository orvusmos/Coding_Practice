#include <iostream>
using  namespace std;

int binarySearch(int arr[],int size,int key)
{
    int start=0;
    int end = size;
    int mid =start + (end-start)/2;

    while(start <= end)
    {
        if(arr[mid] == key)
        {
            return mid;
        }
        if(arr[mid] < key)
        {
            start = mid+1;
        }
        else
        {
            end = mid-1;
        }
        mid =start + (end-start)/2;
    }
    return -1;
}

int main()
{
    int even[6]={1,2,3,4,5,6};
    int odd[1]={1};

    int index  = binarySearch(odd,1,7);
    cout << "index is " << index;
    return 0;
}