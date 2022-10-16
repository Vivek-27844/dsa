#include <iostream>
#include <algorithm>
using namespace std;

int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
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

    cout << linearSearch(arr, n, key) << endl;
    return 0;
}