#include <iostream>
#include <algorithm>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[100];

    int n;
    cout << "Enter the size of the array" << endl;

    cin >> n;
    cout << "Enter the Elements of the array" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the Element to be searched in the array" << endl;

    int key;
    cin >> key;
    sort(arr, arr + n);
    cout << binarySearch(arr, n, key) << endl;
    return 0;
}