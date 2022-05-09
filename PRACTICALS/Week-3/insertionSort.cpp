#include <iostream>
using namespace std;

void display(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}

void insertionSort(int A[], int n)
{
    int i, j, x;
    for (int i = 1; i < n; i++)
    {
        j = i - 1;
        x = A[i];
        while (j > -1 && A[j] > x)
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = x;
    }
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
    cout << "\nArray before sorting is :";
    display(A, n);

    cout << "\nArray after sorting is :";
    insertionSort(A, n);
    display(A, n);

    return 0;
}