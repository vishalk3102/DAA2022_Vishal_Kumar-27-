#include <iostream>
using namespace std;

void display(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}
int findMax(int A[], int n)
{
    int max = A[0];
    for (int i = 0; i < n; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
        }
    }
    return max;
}

void countSearch(int A[], int n)
{
    int maxElement = findMax(A, n);
    int count[maxElement + 1];
    for (int i = 0; i <= maxElement; i++)
    {
        count[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        count[A[i]]++;
    }
    for (int i = 1; i < n; i++)
    {
        count[i] += count[i - 1];
    }
    int result[n];
    for (int i = n - 1; i >= 0; i++)
    {
        result[count[A[i] - 1]] = A[i];
        count[A[i]]--;
    }

    for (int i = 0; i < n; i++)
    {
        A[i] = result[i];
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
    countSearch(A, n);

    return 0;
}