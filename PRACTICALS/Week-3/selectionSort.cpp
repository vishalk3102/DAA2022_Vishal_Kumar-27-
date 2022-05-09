#include <iostream>
using namespace std;

void display(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int A[], int n)
{
    int i, j, k;
    for (int i = 0; i < n - 1; i++)
    {
        k = i;
        for (j = i + 1; j < n; j++)
        {
            if (A[j] < A[k])
            {
                k = j;
            }
        }
        swap(&A[i], &A[k]);
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
    selectionSort(A, n);
    display(A, n);

    return 0;
}