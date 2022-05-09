#include <iostream>
using namespace std;

int linearSearch(int A[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (A[i] == key)
        {
            return i;
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
    if (linearSearch(A, n, key) != -1)
    {
        cout << key << " is present" << endl;
    }
    else
    {
        cout << key << " is not present" << endl;
    }

    return 0;
}