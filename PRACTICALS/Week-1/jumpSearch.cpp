#include <iostream>
#include <math.h>
using namespace std;

int jumpSearch(int A[], int n, int key)
{
    int i = 0;
    int m = sqrt(n);
    while (A[m] <= key && m < n)
    {
        i = m;
        m += sqrt(n);
        if (m > n - 1)
        {
            m = n;
        }
    }
    for (int j = i; j < m; j++)
    {
        if (key == A[j])
        {
            return j;
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
    if (jumpSearch(A, n, key) != -1)
    {
        cout << key << " is present" << endl;
    }
    else
    {
        cout << key << " is not present" << endl;
    }

    return 0;
}