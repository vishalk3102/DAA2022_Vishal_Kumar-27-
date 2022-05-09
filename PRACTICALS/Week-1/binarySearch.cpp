#include <iostream>
using namespace std;

int binarySearch(int A[], int n, int key)
{
    int mid, l, h;
    l = 0, h = n - 1;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (A[mid] == key)
            return mid;
        else if (A[mid] < key)
        {
            l = mid + 1;
        }
        else if (A[mid] > key)
        {
            h = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int n, key;
    cout << "\nEnter the size of array :";
    cin >> n;
    int A[n];
    cout << "\nEnter the element of array :";
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    cout << "\nEnter the key you want to search :";
    cin >> key;
    if (binarySearch(A, n, key) != -1)
    {
        cout << key << " is present" << endl;
    }
    else
    {
        cout << key << " is not present" << endl;
    }

    return 0;
}