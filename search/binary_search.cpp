#include <iostream>

using namespace std;

int BinarySearch(int a[], int n, int m)
{
    int left = 0, right = n, middle;

    while (left < right)
    {
        middle = (left + right) / 2;

        if (a[middle] == m)
        {
            return middle;
        }

        if (a[middle] < m)
        {
            left = middle + 1;
        }
        else
        {
            right = middle;
        }
    }

    return -1;
}

int main()
{
    int a[1000], n, m;

    while (cin >> n >> m)
    {
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        cout << BinarySearch(a, n, m) << endl;
    }

    return 0;
}
